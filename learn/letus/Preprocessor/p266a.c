#include<stdio.h>

int main( )
{
int i = 2 ;
#ifdef DEF
i *= i ;
#else
printf ( "\n%d", i ) ;
#endif

printf("\n");
return 0;
}

