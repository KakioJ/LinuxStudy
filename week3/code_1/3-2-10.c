#include "ch2.h"
int main()
{
	FILE *fp;
	char buf[80];
	memset(buf,0,sizeof(buf));
	fp=fopen("./test.txt","a+");
	//将字符串写入流中
	fputs("\tappend new informatiob!",fp);
	//重新以只读的方式制定test文件，并指向fp
	fp=freopen("./test.txt","r",fp);
	// 将制定的流中读取buf大小的字符存储在buf中
	fgets(buf,sizeof(buf),fp);
	printf("content of file : %s\n",buf);
	fclose(fp);
	return 0;
}
