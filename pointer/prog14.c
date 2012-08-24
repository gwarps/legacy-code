#include<stdio.h>
void disp(int *);
void show(int**);
int main(){
int i;

int marks[]={45,42,56,67,89,90};
for(i=0;i<=6;i++)
disp(&marks[i]);

return 0;
}
void disp(int *n){
show(&n);
}
void show(int **k){
printf("%d\n",**k);
}
