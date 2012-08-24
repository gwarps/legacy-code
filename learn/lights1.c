#include<stdio.h>
#include<math.h>

int main()
{
int i;
printf("Enter the number of blocks\n");
scanf("%d",&i);
printf("\nWe need %d number of lights",(int)pow(i,3));
return(0);
}

