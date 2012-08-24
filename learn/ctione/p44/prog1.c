#include<stdio.h>
#include<string.h>

//Won't Work
/*
char* myFunction1(int n){
char buffer[20];
sprintf(buffer,"%d",n);
return buffer;
}
*/

//Won't work too
/*
char* myFunction2(){
char temp[] = "string";
return temp;
}
*/

//Will work
char* myFunction3(){
char* temp = "Chuppa me verga";
return temp;
}

int main(){
char* lock = myFunction3();
printf("\n%s\n",lock);
return 0;
}
