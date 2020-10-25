#include <stdio.h>
#include <limits.h>
#include <float.h>


int main()
{
   printf("短整型的最小值是 = %d\n", SHRT_MIN);
   printf("短整型的最大值是 = %d\n", SHRT_MAX); 

   printf("整型的最小值是 = %d\n", INT_MIN);
   printf("整型的最大值是 = %d\n", INT_MAX);

   printf("长整型的最小值是 = %ld\n", LONG_MIN);
   printf("长整型的最大值是 = %ld\n", LONG_MAX);

   printf("浮点类型的最小值是 = %e\n", FLT_MAX);
   printf("浮点类型的最大值是 = %e\n", FLT_MIN);

   printf("双精度类型的最小值是 = %e\n", DBL_MIN);
   printf("双精度类型的最大值是 = %e\n", DBL_MAX);
  
   return(0);

}
