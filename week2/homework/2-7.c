#include "ch4.h"


int main(void){
	FILE *fd;
	struct iobuf{
		char buf[8];
		char extern_buf[8];
	}buffer;
	memset(&buffer,'\0',sizeof(struct iobuf));
	gets(buffer.buf);
	fprintf(stdout,"gets（）到的字符串为 \"%s\"\n",buffer.buf);
	fprintf(stdout,"溢出的字符串为\"%s\"\n",buffer.extern_buf);
	return 0;
}

