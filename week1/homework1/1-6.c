#include <stdio.h>
#include <stdlib.h>
int main()
{
	  //int
	  int var;
        var = 0x7ffffff0;
        do
        	{
                printf("%d\n", var);
                var+=0x00000001;
        }while(var>0);
        if(var<=0)
        	{
                printf("最后一个值为int型的最大值。\n");
        	}
        var = 0x80000010;
        do
        	{
                printf("%d\n", var);
                var-=0x00000001;
        }while(var<0);
        if(var>=0)
       		{
                printf("最后一个值为int型的最小值。\n");
        	}

	//float
	printf("\nfloat%ld::\n", sizeof(float) * 8);
	float float_max=0.1; // 分配 32 位空间
	char *pf=(char*)&float_max;
 
	*pf=0xff; // 0~7位
	*(pf+1)=0xff;
	*(pf+2)=0x7f;
	*(pf+3)=0x7f; // 24位 ~ 31位 

	float  float_min = -float_max;
	printf("max = %e\n", float_max);
	printf("min = %e\n", float_min);

	//double
	printf("\ndouble%ld::\n", sizeof(double) * 8);
    	double double_max = 0.1; 
    	char *pd = (char *)&double_max;
    	*pd = 0xff;
    	*(pd + 1) = 0xff;
    	*(pd + 2) = 0xff;
    	*(pd + 3) = 0xff;
    	*(pd + 4) = 0xff;
    	*(pd + 5) = 0xff;
    	*(pd + 6) = 0xef;
    	*(pd + 7) = 0x7f;

	double  double_min = -double_max;
	printf("max = %e\n", double_max);
	printf("min = %e\n", double_min);
    	return 0;

}
