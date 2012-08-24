#include<stdio.h>

void display(int *a,int row,int col);
void show(int (*q)[4],int row, int col);

int main(){
 int a[3][4] = {
		1,2,3,4,
		5,6,7,8,
		9,0,1,6

	};


 display(&a[0][0],3,4); 
 printf("-------------------\n");
 show(a,3,4);
 
 return 0;
}

void display(int *a,int row,int col){
 int i,j;

 for(i=0;i<row;i++){
  for(j=0;j<col;j++){
    printf("%d ",*(a + i*col + j ));
  }
  printf("\n");
 } 
}

void show(int (*q)[4],int row,int col){
 int i,j;
 int *k;
 
 for(i=0;i<row;i++){
  k = q[i];
  for(j=0;j<col;j++){
  printf("%d ",*(k+j)); 

  }
  printf("\n");

 }


}
