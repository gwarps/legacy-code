#include "link.h"
// General ops + merge sort with linked list
void push(struct node** head,int data){
 struct node* newNode = malloc(sizeof(struct node));
 
 newNode->data = data; 
 newNode->next = *head;

 *head = newNode;
}

void print(struct node* head){

 while(head){
  printf("[%d]->",head->data);
  head = head->next;
 }
 printf("[NULL]");
 printf("\n");
}

void move_node(struct node** a,struct node** b){

 struct node* temp = *b;
 *b = temp->next;

 temp->next = *a;
 *a = temp;
}

void fb_split(struct node** head,struct node** a,struct node** b){

 struct node* current = *head;
 struct node* slow = NULL;
 struct node* fast = NULL;
 
 if(!current || !(current->next)){
  *a = *head;
 }else{
  
  slow = current;
  fast = current->next;

  while(fast){
   fast = fast->next;
   if(fast){
    fast = fast->next;
    slow = slow->next;
   }
  }
 *a = current;
 *b = slow->next;
 slow->next = NULL;
 }
}

struct node* sorted_merge(struct node* a,struct node* b){

 struct node* result = NULL;
 struct node** lastptr = &result;
 while(1){

  if(!a){
   *lastptr = b;
   break;
  }else if(!b){
   *lastptr = a;
   break;
  }

  if(a->data <= b->data){
   move_node(lastptr,&a);
   lastptr = &((*lastptr)->next);
  }else{
   move_node(lastptr,&b);
   lastptr = &((*lastptr)->next);
  }
  
 }

 return result;

}

void merge_sort(struct node** head){
 struct node* current = *head;
 struct node* a = NULL;
 struct node* b = NULL;
 if(!current || !(current->next)){
  return;
 }

 fb_split(&current,&a,&b);
 merge_sort(&a);
 merge_sort(&b);
 
 *head = sorted_merge(a,b);
}

struct node* set_union(struct node* a,struct node* b){

 struct node* head = NULL;
 struct node** lastptr = &head;
 merge_sort(&a);
 merge_sort(&b);
 
 while(1){
  if(!a){
   *lastptr = b;
    break;
  }else if(!b){
   *lastptr = a;
    break;
  }
 
  if(a->data<b->data){
   move_node(lastptr,&a);
   lastptr = &((*lastptr)->next);
  }else if(a->data>b->data){
   move_node(lastptr,&b);
   lastptr = &((*lastptr)->next);
  }else{
   a = a->next;
  }

 }
 return head;
}

struct node* set_intersect(struct node* a,struct node* b){

 struct node* head = NULL;
 struct node** lastptr = &head;
 merge_sort(&a);
 merge_sort(&b);

 while(1){
  if(!a){
    break;
  }else if(!b){
    break;
  }


  if(a->data==b->data)
   printf("EQ\n");
  if(a->data<b->data){
   a = a->next;
  }else if(a->data>b->data){
   b = b->next;
  }else{
   move_node(lastptr,&a);
   lastptr = &((*lastptr)->next);
   b = b->next;
  }
 
 }
 return head;
}
