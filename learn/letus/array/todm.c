#include<stdio.h>

main(){

int s[4][2] = {
	{ 1234, 56 },
	{ 1212, 33 },
	{ 1434, 80 },
	{ 1312, 78 }
     };
int i;

for ( i = 0 ; i <= 3 ; i++ )
printf ( "\nAddress of %d th 1-D array = %u", i, s[i] ) ;


printf("\n");

}
