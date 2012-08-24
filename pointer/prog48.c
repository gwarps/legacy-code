#include<stdio.h>
int main(){

struct account{
int no;
char acc_name[15];
float bal;
};
struct account a1,a2,a3;

printf("Enter Account no.s,names and balances\n");
scanf("%d %s %f",&a1.no,a1.acc_name,&a1.bal);
scanf("%d %s %f",&a2.no,a2.acc_name,&a2.bal);
scanf("%d %s %f",&a3.no,a3.acc_name,&a3.bal);

printf("%d %s %.2f\n",a1.no,a1.acc_name,a1.bal);
printf("%d %s %.3f\n",a2.no,a2.acc_name,a2.bal);
printf("%d %s %.4f\n",a3.no,a3.acc_name,a3.bal);
}

