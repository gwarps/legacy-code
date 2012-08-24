#include<stdio.h>

int main(){

int k, num = 30 ;
k = ( num > 5 ? ( num <= 10 ? 100 : 200 ) : 500 ) ;
printf ( "\n%d\n", num ) ;

int j = 4 ;
( !j != 1 ? printf ( "\nWelcome") : printf ( "\nGood Bye") ) ;

int x = 10, y = 20 ;
x == 20 && y != 10 ? printf( "True" ) : printf( "False" ) ;

printf("\n");
return 0;
}
