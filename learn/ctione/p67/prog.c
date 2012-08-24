#include<stdio.h>

int main(int argc,char* argv[]){

unsigned char ch = 0x34;
unsigned char temp1,temp2;

//temp1 = temp1 && 00;
printf("\nCh: %d\n",ch);
temp1 = ch && 0x0F;
temp2 = ch && 0xF0;
printf("\ntemp1: %d\n",temp1);
temp1 = temp1<<4;
temp2 = temp2>>4;

ch = temp1|temp2;
printf("\ntemp1: %d\n",temp1);
printf("\nResult: %x\n",ch);

return 0;
}
