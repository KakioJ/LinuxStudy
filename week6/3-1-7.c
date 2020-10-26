#include "ch06.h"

int main(void){
	int fd;
	FILE *fp;
	char *s="Hello World!\n";
	if((fd=open("./test1.txt",O_CREAT|O_WRONLY,0644))== -1)
	{
		printf("不能创建新的文件!\n");
		exit(1);
	}
	if((fp=fopen("./test2.txt","w+"))==NULL)
	{
		printf("不能创建文件!\n");
		exit(1);
	}
	sleep(15);
	write(fd,s,strlen(s));
	fwrite(s,sizeof(char),strlen(s),fp);
	printf("稍后再写\n");
	sleep(15);
	close(fd);
	return 0;
}


	
