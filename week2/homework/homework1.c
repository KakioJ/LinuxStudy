#include <stdio.h>
int main(){
	char arr[10]="Hello";
	printf("这时打印的结果为：\n%s\n",arr);
	printf("请用gets的输入方法输入:\n");
	gets(arr);
	printf("这时打印的结果为：\n%s\n",arr);
	return 0;
}

