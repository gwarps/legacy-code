#include<stdio.h>

main(){

int a[2][3][2]={
		{
		 {2,4},
		 {7,8},
		 {3,4}
		},
		{
		 {2,2},
		 {2,3},
		 {3,4}
		}
	       };

printf("%u\n",a);
printf("%u\n",*a);
printf("%u\n",**a);
printf("%d\n",***a);
printf("%u\n",a+1);
printf("%u\n",*a+1);
printf("%u\n",**a+1);
printf("%u\n",***a+1);
}


