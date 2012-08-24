#include<stdio.h>
#include<string.h>
char* spec = "Chuppa me verga";
void reverse(int);
int main(){
printf("Original String: \n%s\n",spec);
//reverse(0);
printf("Changed String: \n%s\n",spec);

printf("\n\n");
return 0;
}
void reverse(int pos){
char temp1;
char temp2;
int len = strlen(spec);
if(pos<=len/2){
temp1 = *(spec+pos);
temp2 =  *(spec+len-pos-1);
*(spec+pos) = temp2;
//*(spec+len-pos-1) = temp;

//reverse(pos+1);
}

}

