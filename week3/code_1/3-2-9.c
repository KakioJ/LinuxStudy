#include "ch2.h"
int main()
{
	FILE *fp;
	int fd;
	//以默认的权限打开当前目录下的test.txt文件，并将其返回的文件描述符号
	//传给fd
	fd=open("./test.txt",O_RDWR);
	// 将文件描述符转换成对应的文件指针并返回传给fp  
	fp=fdopen(fd,"w+");
	// 将格式控制符里的内容打印到fp文件传输流中
	fprintf(fp, "test data %s\n","hello world");
	fclose(fp);
	return 0;
}
