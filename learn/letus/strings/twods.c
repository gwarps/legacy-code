#include<stdio.h>
#include<string.h>

int main(){

 char master[6][20] = {

			"akshay nipane",
			"nagandra h d",
			"anoj vishwanathan",
			"sourabh sharma",
			"megha rastogi",
			"arvind asheesh"

 };

 char sname[20];
 int i;
 int flag=0;
 int a;
 printf("Enter the name for search:: ");
 gets(sname);

 for(i=0;i<6;i++){
  a = strcmp(sname,master[i]);
  //a = strcmp(sname,&master[i]);
  //works same way
  printf("%d\n",a);
 }
 return 0;
}
