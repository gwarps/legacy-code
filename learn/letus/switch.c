#include<stdio.h>

/*
int main(){

int k;
float j=2.0;

switch(k=j+1){

case 3: printf("\nCase Caught\n");
	break;

default: printf("Otherwise\n");
	break;
}

return 0;
}
*/
main( )
{
int ch = 'a' + 'b' ;
switch ( ch )
{
case 'a' :
case 'b' :
printf ( "\nYou entered b" ) ;
case 'A' :
printf ( "\na as in ashar" ) ;
case 'b' + 'a' :
printf ( "\nYou entered a and b" ) ;
}
}

