// file.c 接口的实现
static void open(struct tagFile* self, const char* fileName)
{
	FILE* fp = NULL;
	if (0 == fopen_s(&fp, fileName, "w"))
	{
		self->fp = fp;
		return;
	}

	self->fp = NULL;
	return;
}

static int isOpen(struct tagFile* self)
{
	if (NULL != self->fp)
	{
		return 0;
	}

	return -1;
}

static void close(struct tagFile* self)
{
	if (NULL != self->fp)
	{
		fclose(self->fp);
	}

	self->fp = NULL;
}

static void seek(struct tagFile* self, long offset, int from)
{
	if (NULL != self->fp)
	{
		fseek(self->fp, offset, from);
	}
}

static size_t read(struct tagFile* self, void *ptr, size_t size, size_t count)
{
	if (NULL != self->fp)
	{
		size_t ret = fread(ptr, size, count, self->fp);
		return ret;
	}

	return 0;
}

static size_t write(struct tagFile* self, const void * ptr, size_t size, size_t count)
{
	if (NULL != self->fp)
	{
		size_t ret = write(ptr, size, count, self->fp);
	}

	return 0;
}

File* newFile()
{
	File* file = (File*)malloc(sizeof(File));
	if (NULL != file)
	{
		file->fp = NULL;
		file->open = open;
		file->close = close;
		file->seek = seek;
		file->read = read;
		file->write = write;
		file->isOpen = isOpen;
	}

	return file;
}
void deleteFile(File * file)
{
	if (NULL != file)
	{
		free(file);
	}
	file = NULL;
}

