#include<stdio.h>
int main(){
char name[]="Puneet Singh";
char *ptr;

ptr=name;
while(*ptr!='\0'){
printf("%c ",*ptr);
ptr++;
}
printf("\n");
return 0;
}
