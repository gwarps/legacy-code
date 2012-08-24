#include<stdio.h>

int i = 0 ;
void val();
int main( )
{
printf ( "\nmain's i = %d", i ) ;
i++ ;
val( ) ;
printf ( "\nmain's i = %d", i ) ;
val( ) ;
return 0;
}
void val( )
{
i = 100 ;
printf ( "\nval's i = %d", i ) ;
i++ ;
}

