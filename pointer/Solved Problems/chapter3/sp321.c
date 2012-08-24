#include<stdio.h>

int main(){

char *mess[] = {
		"Some love one",
		"Some love two",
		"i love one",
		"That is you"
		};

printf("\n%d %d \n",sizeof(mess),sizeof(mess[1]));
return 0;

}
