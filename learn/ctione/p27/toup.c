#include<stdio.h>

int toUpper(int ch){

if(ch>='a' && ch <= 'z')
return ('A' - 'a' + ch);

}

int main(){

char ch;

scanf("%c",&ch);

printf("\n%c\n",toUpper(ch));

return 0;
}
