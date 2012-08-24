#include<stdio.h>
int main()
{
char a,b;
printf("Which character is greater?\n");
printf("Type a single character:");
a=getchar();
printf("\nType another character:");
b=getchar();
if(a>b)
printf("\n%c is greater than %c",a,b);
else if(a<b)
printf("\n%c is less then %c",a,b);
else
printf("\nNext time don't type the same character twice");

return(0);
}
