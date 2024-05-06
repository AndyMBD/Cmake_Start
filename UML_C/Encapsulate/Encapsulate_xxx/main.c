// 面向对象的编程
File* file = newFile();
if (NULL != file)
{
	file->open(file, "a.txt");
	if (0 == file->isOpen(file))
	{
		file->write(file, "abc....", sizeof("abc...."), 1);
		char buffer[512] = { 0 };
		file->read(file, buffer, 5, 1);
		file->close(file);
	}
	
	deleteFile(file);
	file = NULL;
}
