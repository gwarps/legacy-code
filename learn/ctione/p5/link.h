#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>

typedef struct node{
void* data;
struct node* next;
}myNode;

struct check{
int i;
char c;
float d;
};

void insert(myNode** head,void* data,unsigned int n);
void print_list(myNode* head, void (*f)(void*));
void print_int(void* data);
void print_char(void* data);
void print_str(void* data);
void print_comp(void* data);
