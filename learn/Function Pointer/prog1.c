#include "link.h"

int main(){

void (*fp)(int);

fp = func;
(*fp)(1);
fp(2);

return 0;

}
