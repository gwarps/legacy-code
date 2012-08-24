#include<stdio.h>
#include<string.h>

int isPalindrome(char*);

int main(){

char* str = "longbow wobgnol";
printf("Result: %d\n",isPalindrome(str));
return 0;
}

int isPalindrome(char* str){

int a = strlen(str);
int start,end,i,mid;
mid = (a-1)/2;
end = a-1;


for(i=0,end;i<=mid;i++,end--){
if(*(str+i) != *(str+end))
return 0;
}
return 1;
}
