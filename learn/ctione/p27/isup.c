#include<stdio.h>

int isUp(int ch){

if(ch >= 'A' && ch <= 'Z')
return 1;
else 
return 0;

}

int main(){

char ch;

scanf("%c",&ch);

printf("\n%d\n",isUp(ch));

return 0;
}
