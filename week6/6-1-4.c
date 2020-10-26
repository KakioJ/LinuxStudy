#include "ch06.h"

int main(void){
	int i=0;
	char buf[2048];
	for(i;i<2037;i++）{
		printf("");
	}
	setvbuf(stdout, buf,_IOLBF , 2048);
	printf("hello world!");
	while(1);
	return 0;
}
	






































