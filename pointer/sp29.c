#include<stdio.h>
int main(){
int a[3][4] = {
		1,2,3,4,
		5,6,7,8,
		9,10,11,12
	      };
printf("Address starts at: %u\n",a);
printf("%u %u\n",a,&a[0]);
printf("%u %u %u\n",a[0]+1,*(a[0]+1),*(*(a+0)+1));
return 0;
}
