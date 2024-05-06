struct PrivateFileDesc
{
	FILE* fp
};

struct PrivateFuncs
{
	int (*isOpen)(struct tagFile* self)
};

static void open(struct tagFile* self, const char* fileName)
{
	if (self->funcs->isOpen(self))
	{
		return;
	}

	FILE* fp = NULL;
	if (0 == fopen_s(&fp, fileName, "w"))
	{
		if (NULL != self->fileDesc)
		{
			self->fileDesc->fp = fp;
		}
		return;
	}

	self->fileDesc->fp = NULL;
	return;
}

static int isOpen(struct tagFile* self)
{
	if ((NULL != self->fileDesc) && (NULL != self->fileDesc->fp))
	{
		return 0;
	}

	return -1;
}

static void close(struct tagFile* self)
{
	if ((NULL != self->fileDesc) && (NULL != self->fileDesc->fp))
	{
		fclose(self->fileDesc->fp);
		self->fileDesc->fp = NULL;
	}
}

static void seek(struct tagFile* self, long offset, int from)
{
	if ((NULL != self->fileDesc) && (NULL != self->fileDesc->fp))
	{
		fseek(self->fileDesc->fp, offset, from);
	}
}

static size_t read(struct tagFile* self, void *ptr, size_t size, size_t count)
{
	if ((NULL != self->fileDesc) && (NULL != self->fileDesc->fp))
	{
		size_t ret = fread(ptr, size, count, self->fileDesc->fp);
		return ret;
	}

	return 0;
}

static size_t write(struct tagFile* self, const void * ptr, size_t size, size_t count)
{
	if ((NULL != self->fileDesc) && (NULL != self->fileDesc->fp))
	{
		size_t ret = write(ptr, size, count, self->fileDesc->fp);
	}

	return 0;
}


File* newFile()
{
	File* file = (File*)malloc(sizeof(File));
	if (NULL != file)
	{
		file->fileDesc = (struct FileDesc*) malloc(sizeof(struct PrivateFileDesc));
		file->fileDesc->fp = NULL;
		file->funcs = (struct PrivateFuncs*) malloc(sizeof(struct PrivateFuncs));
		file->funcs->isOpen = isOpen;
		file->open = open;
		file->close = close;
		file->seek = seek;
		file->read = read;
		file->write = write;
	}

	return file;
}
void deleteFile(File * file)
{
	if (NULL != file)
	{
		if (NULL != file->fileDesc)
		{
			free(file->fileDesc);
		}
		file->fileDesc = NULL;

		if (NULL != file->funcs)
		{
			free(file->funcs);
		}

		free(file);
	}

	file = NULL;
}
