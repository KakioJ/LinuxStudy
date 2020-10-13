#include "ch2.h"

int main()
{
	FILE *fp;
	char buf[80];
	int ret;
	memset(buf,0,sizeof(buf));
	if((fp=fopen("./test.txt","w"))==NULL)
		perror("open failed!\n");
	fgets(buf,sizeof(buf),stdin);
	ret=fwrite(buf,sizeof(char),sizeof(buf)/sizeof(char),fp);
	printf("%d\n",ret);
	printf("Content is %s\n",buf);
	fclose(fp);
	return 0;
	
}
