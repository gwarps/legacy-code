#include "link.h"

int main(){

int a[] = {10,31,2,81,91,42,3,33,41,80,6,12,18};
int n = 13;

print(a,n);
merge_sort(a,0,n-1);
print(a,n);
return 0;
}
