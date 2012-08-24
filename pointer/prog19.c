#include<stdio.h>
void display(int*,int);

void main(){
int marks[]={23,44,24,75,87,90};


display(&marks[0],6);
}

void display(int *marks,int n){
int k=0;
while(k<n){
printf("%d\n",*marks);
*marks=*(marks++);
k++;
}
}


