/**自己写的存在无法写入文件的逻辑错误
 * 时间2020-10-19
 * 作者kakio 
 **/
#include "ch4.h"
char buf1[]="abcdefghij";
char buf2[]="0123456789";
void error_stderr(char *s){
	printf("Usage: *s is faile!\n");
	exit(1);
}
int main(void) {

	int fd;
	if(fd=open("jasmine.txt",O_WRONLY|O_CREAT|O_TRUNC,0644)<0){
		error_stderr("error");
			
	}
	if(write(fd,buf1,10)!= 10){
		error_stderr("error");
	}
	if(lseek(fd,30,SEEK_SET)== -1){
		error_stderr("error");
		
	}
	if(write(fd,buf2,10)!= 10){
		error_stderr("error");	
	}
	return 0;
}

