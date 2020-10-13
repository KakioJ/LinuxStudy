#include "ch2.h"

int main(int argc, char *argv[])
{
	FILE *fp;
	int i=1;
	if((fp=fopen("./test.txt","w"))==NULL)
		perror("open failed!\n");
	fgets(*argv,argc,*argv[argc]);
	for(i;i<=argc;i++)
	{
		printf("Content is %s\n",argv[i]);
	}
	fclose(fp);
	return 0;
	
}
