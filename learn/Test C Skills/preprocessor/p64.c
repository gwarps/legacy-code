#include<stdio.h>
#define SQUARE(x) x*x

int main(){
float s = 10,u = 30,t = 2,a;

a = 2 * (s - u * t);
printf("Result: %f\n%f",a,SQUARE(t));

return 0;
}
