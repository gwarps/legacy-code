#include<stdio.h>
struct personel
{
char name[20];
int day;
char month[10];
int year;
float salary;
};
main()
{
struct personel person;
printf("Input Values\n");
scanf("%s %d %s %d %f",person.name,&person.day,person.month,&person.year,&person.salary);
printf("%s %d %s %d %.1f\n",person.name,person.day,person.month,person.year,person.salary);
}

