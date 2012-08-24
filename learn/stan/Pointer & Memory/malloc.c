#include<stdio.h>
#include<stdlib.h>

int main(){
 int* ptr;

 printf("Pointer Address Before Allotment %u\n",ptr);
 ptr = malloc(sizeof(int));

 *ptr = 24;
 printf("Pointer Address After Allotment %u & Value:%d\n",ptr,*ptr);
 
 free(ptr);
 printf("Pointer Address After Deallocation %u & Value:%d\n",ptr,*ptr);
 return 0;
}
