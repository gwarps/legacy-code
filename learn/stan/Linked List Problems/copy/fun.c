#include "link.h"

void push(myNode** head,int data){
 myNode* temp = malloc(sizeof(myNode*));
 temp->data = data;
 temp->next = *head;

 *head = temp;

}


void print(myNode* head){
 while(head != NULL){
  printf("[%d]->",head->data);
  head = head->next;
 }
printf("[NULL]\n");

}
// count
int count(myNode* head){
 int x = 0;
 
 while(head!=NULL){
  x = x + 1;
  head = head->next;
 }
 return x;
}
// No. stored at Nth position
int findNth(myNode* head,int index){
 int count = 0;
 while(head!=NULL){
  if(count==index){
   return head->data;
  }
  count++;
  head = head->next;
 }   
 return -1;

 }
// Delete all linked list
void delete_all(myNode** head){
 myNode* temp = *head;
 myNode* cur;
 while(temp!=NULL){
  cur = temp->next;
  printf("\nDeleted::%d",temp->data);
  free(temp);
  temp = cur; 

 }
 *head = NULL;
 printf("\n");
}
// Delete the head data node. and return that data
int pop(myNode** head){

 myNode* temp = *head;

 if(temp!=NULL){
  *head = temp->next;
  printf("\nData Popped::%d\n",temp->data);
  free(temp);
 }else{
  printf("Input Error!! Linked List is empty");
 }

}
// Insert a node at a given index
void pushNth(myNode** head,int index,int data){
 int i;
 myNode* current = *head;

 if(index==0){
  push(head,data);
 }else{
  for(i=0;i<index-1;i++){
    assert(current!=NULL);
    current = current->next; 
  } 
  assert(current!=NULL);
  push(&(current->next),data); 
 }


}
// Insertion in sorted list
void sorted_push(myNode** head,int data){
 myNode* temp = *head;

 if (!temp || temp->data>=data){
 	push(head,data); 
 }
 else
 {
	 while(temp->next && temp->next->data < data){
	//    printf("temp->data: %d\n", temp->data);
    		temp = temp->next;
 }
  push(&(temp->next),data);
  
 }
}
// To append one list to tail of another
void append(myNode** a,myNode** b){
 if(*b != NULL){
  if(*a == NULL){
   *a = *b;
  }else{
   myNode* temp = *a;
   while(temp->next != NULL){
    temp = temp->next;
   }
   temp->next = *b;
  }

 *b = NULL;
 }
}

// Front back split using length count method
void fb_split_count(myNode** head, myNode** a,myNode** b){
 int i = 0;
 int index = count(*head);
 myNode* current = NULL;
 
 if(index < 2){
  *a = *head;
  *b = NULL;
 }else{
   current = *head;
   *a = current;
   while(i < (index-1)/2){
    current = current->next;
    i++;
   }
   *b = current->next;
   current->next = NULL;
 }
 *head = NULL;
}

// Front back split using slow fast pointer method
void fb_split_sf(myNode** head,myNode** a,myNode** b){
 myNode* current = *head;
 myNode* slow = NULL;
 myNode* fast = NULL;
 if(!current || !current->next){
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
 *head = NULL;
}

// Move top node of source to top of destination
void move_node(myNode** dest,myNode** source){
 myNode* current = *source;
 assert(current);

 *source = current->next;
 current->next = *dest;
 
 *dest = current;

}
// Alter split but result in reverse
void alter_split(myNode* head,myNode** a,myNode** b){
 myNode* current = head;
 myNode* c = NULL;
 myNode* d = NULL;

 while(current){
  move_node(&c,&current);
  
  if(current){
   move_node(&d,&current);
  }
 }
 *a = c;
 *b = d;
}

// Alter split but order is maintained
void alter_split_mod(myNode* head,myNode** a,myNode** b){
 myNode* current = head;
 myNode* c = NULL;
 myNode* d = NULL;

 myNode** c_pt = &c;
 myNode** d_pt = &d;
 
 while(current){
  move_node(c_pt,&current);
  
  if(current){
   move_node(d_pt,&current);
  }
  
  c_pt = &((*c_pt)->next);
  d_pt = &((*d_pt)->next);

 }
 
 *a = c;
 *b = d;
}
// Alternating merge
myNode* shuffle_merge_local(myNode* a,myNode* b){
 
 myNode* result = NULL;
 myNode** lastptr = &result;
 while(1){
  if(!a){
   *lastptr = b;
   break;
  }else if(!b){
   *lastptr = a;
   break;
  }else{
   move_node(lastptr,&a);
   lastptr = &((*lastptr)->next);
    
   move_node(lastptr,&b);
   lastptr = &((*lastptr)->next);

  }
 }
 return result;
}

myNode* shuffle_merge_recursive(myNode* a,myNode* b){
 
 myNode* res = NULL;
 if(!a){
  return b;
 }else if(!b){
  return a;
 }else{
  res = shuffle_merge_recursive(a->next,b->next);
  
  a->next = b;
  b->next = res;

  return a; 

 }
}

myNode* sorted_merge(myNode* a,myNode*b){
 myNode* res = NULL;
 myNode** lastptr = &res;
 
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
 return res;
}

myNode* sorted_merge_recursive(myNode* a,myNode* b){

 myNode* result = NULL;

 if(!a){
  return b;
 }else if(!b){
  return a;
 }
 
 if(a->data <= b->data){
  result = a;
  result->next = sorted_merge_recursive(a->next,b);
 }else{
  result = b;
  result->next = sorted_merge_recursive(a,b->next);
 }

 return result;
}

void merge_sort(myNode** head){
 myNode* current = *head;
 myNode* a = NULL;
 myNode* b = NULL;

 if(!current || !(current->next)){
  return;
 }

 fb_split_sf(&current,&a,&b);
   
 merge_sort(&a);
 merge_sort(&b);
  
 *head = sorted_merge(a,b);
}
