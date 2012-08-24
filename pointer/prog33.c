#include<stdio.h>

int main(){
char name[]="puneet";
int i;
i=0;
while(name[i]){
printf("%c ",name[i]);
i++;
}
printf("\n");
printf("%c\n",*name);
return 0;

}

