#include "ch06.h"
int main(void)
{
	char buf[20];
	int ret;
	
	FILE *fp = fopen("tmp.txt","w+");
	if(fp==NULL){
		printf("fail to open ");
		exit(-1);
	}
	ret=fwrite("123",sizeof("123"),1,fp);
	printf("写了%d\n",ret);
	
	memset(buf,0,sizeof(buf));
//	fseek(fp, SEEK_SET, 0);
	ret=fread(buf,1,1,fp);
	printf("读了%S, ret此时为%d",buf,ret);
	fwrite("456",sizeof("456"),1,fp);
	fclose(fp);
	return 0;
}

