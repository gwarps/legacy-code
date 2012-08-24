#include<stdio.h>
#include<stdlib.h>
int main(){
int n,i,*p,sum=0;
float avg;

printf("Enter the no. of students\n");
scanf("%d\n",&n);

printf("data\n");
p=(int*)malloc(n*sizeof(int));
printf("if test\n");

if(p==NULL){
printf("Memory allocation unsuccessful\n");
exit(1);
}

for(i=0;i<n;i++){
printf("No %d: ",i+1);
scanf("%d\n",(p+i));
}
for(i=0;i<n;i++){
sum=sum + *(p+i);
}
avg=(float)sum/n;
printf("Average marks=%f\n",avg);
printf("Sum:%d\n",sum);
return 0;


}
