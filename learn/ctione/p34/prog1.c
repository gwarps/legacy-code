#include<stdio.h>
#include<string.h>
void reverse(char*,int,int);
int main(){
char buffer[] = "I am a good boy";
int x,y;
reverse(buffer,0,strlen(buffer)-1);
printf("\n%s\n",buffer);

x = 0;
y = 0;
while(x<(strlen(buffer)-1)){
if(*(buffer+x) == '\0'||*(buffer+x) == ' '){
reverse(buffer,y,x-1);
y = x+1;
}
x = x+1;
}
printf("\n%s\n",buffer);

return 0;
}

void reverse(char* buf,int start,int end){
char temp;
if(start>=end)
printf("\nDone\n");
else{
temp = *(buf+start);
*(buf+start) = *(buf+end);
*(buf+end) = temp;

reverse(buf,++start,--end);

}
}
