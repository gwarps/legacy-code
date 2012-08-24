
#include<stdio.h>
#include<stdlib.h>
int main()
{
char  jerk[20];
int kill;
printf("Enter the name of a known jerk\n");
scanf("%s",&jerk);
kill=atoi(jerk);
printf("\nThe name of jerk was %s",jerk);
printf("\nDecimal convert was %d",kill);
return(0);
}
