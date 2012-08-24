#include<stdio.h>
#include<string.h>
void reverse(char*,int,int);
int main(){
char buffer[] = "This is a Test";
reverse(buffer,0,strlen(buffer)-1);
printf("\n%s\n",buffer);

return 0;

}

void reverse(char* buf,int start,int end){

char temp;
if(start>=end)
printf("\n%s\n",buf);
else{

temp = *(buf+start);
*(buf+start) = *(buf+end);
*(buf+end) = temp;

reverse(buf,++start,--end);
}
}
