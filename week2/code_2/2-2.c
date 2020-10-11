#include"ch2.h"
int main()
{
	int ret;
	printf("2-2 is running!\n");
	ret=write(1,"Hello Wrold!\n",13);
	sleep(100);
	exit(0);
}

