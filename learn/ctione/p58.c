#include<stdio.h>

int binary_search(int arr[],int size,int key);

int main(int argc,char* argv[]){
int num = atoi(argv[1]);
int list[10] = {2,6,8,23,51,62,77,84,123,211};

int index = binary_search(list,10,num);

printf("\nThe index is : %d\n",index);


return 0;
}

int binary_search(int arr[],int size,int key){

int left,right,middle;

left=0;
right=size-1;

while(left<right){

middle=(left+right)/2;

if(key==arr[middle]){
return middle;
}
if(key > arr[middle]){

left=middle+1;

}else{

right = middle-1;

}

}
}




