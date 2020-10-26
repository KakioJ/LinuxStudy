#include "ch4.h"

int main(){
	FILE *fp;
	int PosRead;  //定义读取记录的位置
	fpos_t pos;
	char data; //存储找到的文件位置下代表的值   
	char buffer[100];	
	if((fp = fopen("tmp.txt","w+"))==NULL){
		printf("打开文件出错，将退出程序!\n");
		exit(-1);
	}
	fgets(buffer, 100,stdin);
	fputs(buffer, fp);
	fseek(fp, 0, SEEK_CUR); //文件定位到当前位置
	fgets(buffer,100,stdin);
	fputs(buffer,fp);
	fseek(fp, 0, SEEK_CUR); //文件定位到当前位置
	fgets(buffer,100,stdin);
	fputs(buffer,fp);
	fseek(fp,0,SEEK_END); //文件定位到文件的末尾位置
	fprintf(stdout,"请输入你要获取位置的数值:\n");
	scanf("%d",&PosRead);
	fseek(fp,-PosRead, SEEK_END);
	fread(&data,sizeof(char),1,fp);
	fgetpos(fp,&pos);
	printf("当前位置为%ld数据为%c",pos,data);		
	return 0;
}

	
	

 
