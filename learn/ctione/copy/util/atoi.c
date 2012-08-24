#include<stdio.h>
#include<string.h>

int main(){

char* str = "1234";
char* dep = str;
int sum=0;
while(*str!='\0'){
 sum = sum*10 + *str - '0';
 str++;
}

printf("Original:: %s\n",dep);
printf("Converted + 1:: %d\n",sum+1);
return 0;

}
