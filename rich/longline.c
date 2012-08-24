#include<stdio.h>
#define MAXLINE 1000

int getLine(char line[],int maxline);
void copy(char to[],char from[]);

main(){
int len;
//current line length
int max;
//maximum line length so far

char line[MAXLINE];
//for current line
char longest[MAXLINE];
//for longest line found so far

max=0;

while((len=getLine(line,MAXLINE))>0){
if(len>max){
printf("\nMax length just got changes\n");
max =len;
copy(longest,line);
}
if(max>0){
printf("\n%s\n",longest);
}
}
}

int getLine(char s[], int maxline){
int c,i;

for(i=0;i<maxline-1 && (c=getchar())!=EOF && c!='\n';++i){
s[i]=c;
}
if(c=='\n'){
s[i]=c;
++i;
}
s[i]='\0';
}

void copy(char to[],char from[]){
{
int i=0;
while((to[i]=from[i])!='\0'){
++i;
}
}
}
