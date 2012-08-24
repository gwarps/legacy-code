#include "link.h"

int main(){

myNode* head = NULL;
myNode* listOne = NULL;
myNode* listTwo = NULL;
myNode* listThree = NULL;
//Data insertion prep
int i[] = {5,2,12,10};
char c[] = {'s','t','a','z','p'};
char *str[] = {"lock1","lock2","lock3","lock4","lock5"};

struct check chk[] = {{1,'a',1.1},{2,'b',2.2},{3,'c',3.3}};

insert(&head,&i[0],sizeof(int));
insert(&head,&i[1],sizeof(int));
insert(&head,&i[2],sizeof(int));
insert(&head,&i[3],sizeof(int));

insert(&listOne,&c[0],sizeof(char));
insert(&listOne,&c[1],sizeof(char));
insert(&listOne,&c[2],sizeof(char));
insert(&listOne,&c[3],sizeof(char));
insert(&listOne,&c[4],sizeof(char));

insert(&listTwo,str[0],strlen(str[0]));
insert(&listTwo,str[1],strlen(str[1]));
insert(&listTwo,str[2],strlen(str[2]));
insert(&listTwo,str[3],strlen(str[3]));
insert(&listTwo,str[4],strlen(str[4]));

insert(&listThree,&chk[0],sizeof(chk[0]));
insert(&listThree,&chk[1],sizeof(chk[1]));
insert(&listThree,&chk[2],sizeof(chk[2]));



printf("\nPrinting Integers\n");
print_list(head,print_int);
printf("\nDone\n");

printf("\nPrinting Characters\n");
print_list(listOne,print_char);
printf("\nDone\n");

printf("\nPrinting Strings\n");
print_list(listTwo,print_str);
printf("\nDone\n");

printf("\nPrinting Structs\n");
print_list(listThree,print_comp);
printf("\nDone\n");

printf("\n");
return 0;
}
