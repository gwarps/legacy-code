#include<stdio.h>

int main(){

static char *s[] = {"black","white","pink","violet"};

char **ptr[] = {s+3,s+2,s+1,s},***p;

p = ptr;

//++p;
printf("%s\n",**p);
printf("\n");

//printf("%s\n",s);
printf("%s\n",**ptr);


//printf("%u %u %u %u\n",s,s[0],s[1],s[2]);

printf("%u %u %s %u\n",p,*p,**p,***p);



printf("%s\n",**p+1);
return 0;
}
