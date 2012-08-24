#include<stdio.h>

struct data{
int i;
int j;
float k;
};

int main(){
struct data* p = 0;

int size = (char*)(p+1) - (char*)(p);


printf("\nSize using struct pointer: %d\n",sizeof(p));
printf("\nSize using: %d\n",sizeof(*p));
printf("\nSize using manual: %d\n",size);

return 0;
}
