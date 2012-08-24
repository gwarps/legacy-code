#include<stdio.h>
#include<stdlib.h>

struct node{
int data;
struct node *link;
};

int count(struct node *q);
void append(struct node **q,int num);
int main(){
struct node *p;
p=NULL;

printf("No. of elements in the linked list = %d\n",count(p));

append(&p,8);
append(&p,2);
printf("No. of elements in the linked list = %d\n",count(p));

return 0;
}




//adds a node at the end of the list

void append(struct node **q,int num){

struct node *temp,*r;
printf("Addr Value: %u\n",*q);
temp=*q;
if(*q==NULL){
printf("First Cond\n");
temp=malloc(sizeof(struct node));
temp->data=num;
temp->link=NULL;
*q=temp;
}
else{
//go to the last node
printf("Second Cond\n");
temp=*q;
printf("%u\n",NULL);
while(temp->link==NULL){
temp=temp->link;
}
/*
r=malloc(sizeof(struct node));
r->data=num;
r->link=NULL;
temp->link=r;
*/
}
}

int count(struct node* p){
int c=0;

while(p!=NULL){
p=p->link;
//printf("%d %u %u",p->data,p->link,p);
c++;
}
return c;
}
