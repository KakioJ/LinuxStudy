#include<stdio.h>
int main() {
    int int_n = 0;
    unsigned int u_int_n = 0;
    // int float_n = 0;
    long long double_n = 0;


    printf("int32::\n");
    while (1) {
        int_n <<= 1;
        int_n += 1;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            
        printf("%d\n", int_n);
        if ((int_n<<1)+1 == -1) {
            // printf("%d\n", int_n);
            break;
        }
    }
    printf("\nunsigned int32::\n");
    while (1) {
        u_int_n <<= 1;
        u_int_n += 1;
        printf("%d\n", u_int_n);
        if ((int)((u_int_n << 1) + 1) == -1) {
            // printf("%u\n", u_int_n);
            break;
        }
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
