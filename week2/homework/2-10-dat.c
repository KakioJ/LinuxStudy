#include "ch4.h"

int main(){
	FILE *fp;
	int PosRead;  //定义读取记录的位置
	fpos_t pos;
	int PosAll;  //定义读取记录的总长度
	char data[100]; //存储找到的文件位置下代表的值   
	char buffer[100];	
	if((fp = fopen("tmp.txt","w+"))==NULL){
		printf("打开文件出错，将退出程序!\n");
		exit(-1);
	}
	fprintf(stdout,"请输入记录的总个数:\n");
	fgets(buffer, 100,stdin);
	fputs(buffer, fp);
	fseek(fp, 0, SEEK_CUR); //文件定位到当前位置
	fprintf(stdout,"请分别输入各个记录的长度:\n");
	fgets(buffer,100,stdin);
	fputs(buffer,fp);
	fseek(fp, 0, SEEK_CUR); //文件定位到当前位置
	fgetpos(fp,&pos);	     //此时文件定位到第二行换行符
	fprintf(stdout,"请分别输入各个记录:\n");
	fgets(buffer,100,stdin);
	fputs(buffer,fp);
	fseek(fp,0,SEEK_CUR); //文件定位到当前位置
	fprintf(stdout,"请输入你要获取位置的数值:\n");
	fscanf(stdin,"%d",&PosRead);
	fsetpos(fp,&pos);	//此时文件定位到第二行换行符
	fseek(fp,PosRead,SEEK_CUR);
	printf("当前位置为%ld数据为%c",pos,data);		
	return 0;
}

	
	

 
