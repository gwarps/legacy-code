#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main( )
{

FILE *fp ;
char another = 'Y' ;

struct emp
{
char name[40] ;
int age ;
float bs ;
};

struct emp e ;
fp = fopen ( "EMPLOYEE.DAT", "w" ) ;
if ( fp == NULL )
{
puts ( "Cannot open file" ) ;
exit(0) ;
}
while ( another == 'Y' )
{
printf ( "\nEnter name, age and basic salary: " ) ;
scanf ( "%s %d %f", e.name, &e.age, &e.bs ) ;
fprintf ( fp, "%s %d %f\n", e.name, e.age, e.bs ) ;
printf ( "Add another record (Y/N)\n" ) ;
//fflush ( stdin ) ;
//printf("reach\n");
}
fclose ( fp ) ;


return 0;

}
