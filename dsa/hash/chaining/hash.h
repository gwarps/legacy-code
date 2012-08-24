#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define SIZE 10

typedef int key;

struct data{
char name[10];
char wpn[10];
};

struct record{
key code;
struct data det;
struct record* next;
};
//Global hash table
struct record* hashtable[SIZE];

void intialize();//Initilize all to NULL
void insertRecordFile(char* filename);//Take records from a file
void insertRecordSingle(key code,char* name,char* weapon);//Insert a Single Record checking for possible duplicates
int hash(int key);//Simple hash function
void linkInsertion(struct record** head,int code,char* name,char* wpn);
void print_hash();
struct record* search(int key);
