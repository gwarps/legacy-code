#include<stdio.h>


int main(){
unsigned int d = 1,m=9,y=2011;
unsigned int year,month,day,date;


date = (y-1980)*512 + m*32+d;

year = 1980 + (date>>9);
month = ((date<<(7+16))>>(12+16));
day = (date<<(11+16))>>(11+16);
printf("Size of: %d",sizeof(unsigned int));
printf("\nEncoded Date: %u",date);

printf("\nYear: %u",year);
printf("\nDay: %u",day);
printf("\nMonth: %u",month);
printf("\n");

return 0;
}
