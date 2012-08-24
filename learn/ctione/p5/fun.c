#include "link.h"

void insert(myNode** head,void* data,unsigned int n){

myNode* temp = malloc(sizeof(myNode*));
int i;

temp->data = malloc(sizeof(n));

for(i=0;i<n;i++){

*(char*)(temp->data+i) = *(char*)(data+i);
}

temp->next = *head;
*head = temp;
}

void print_list(myNode* head, void (*f)(void*)){

while(head!=NULL){

(*f)(head->data);
head = head->next;
}
printf("NULL");
}

void print_int(void* data){

printf("[%d]->",*(int*)(data));
}

void print_char(void* data){
printf("[%c]->",*(char*)(data));
}

void print_str(void* data){
printf("[%s]->",(char*)(data));
}

void print_comp(void* data){
struct check lock = *(struct check*)(data);
printf("%d %c %f\n",lock.i,lock.c,lock.d);
}
