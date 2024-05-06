struct PrivateFileDesc;
struct PrivateFuncs;

typedef struct tagFile
{
	struct PrivateFileDesc* fileDesc;
	struct PrivateFuncs*  funcs;

	void (*open)(struct tagFile* self, const char* fileName);
	void (*close)(struct tagFile* self);
	void (*seek)(struct tagFile* self, long offset, int from);
	size_t (*read)(struct tagFile* self, void *buffer, size_t size, size_t count);
	size_t (*write)(struct tagFile* self, const void * ptr, size_t size, size_t count);
} File;

File* newFile();
void deleteFile(File* file);
