#include "hash.h"

//Enter Records
void insertRecordFile(char* filename){

printf("Inserting Records....\n");
FILE* fp = fopen(filename,"r");
if(fp == NULL){
printf("File not exist/Error\n");
exit(0);
}
struct record fileread;

while(fscanf(fp,"%d %s %s",&fileread.code,fileread.det.name,fileread.det.wpn)!=EOF)
{
printf("\n%d %s %s",fileread.code,fileread.det.name,fileread.det.wpn);

insertRecordSingle(fileread.code,fileread.det.name,fileread.det.wpn);

}
printf("\nRecords Insertion Complete..!!\n");
fclose(fp);

}

//Single Record Insertion Procedure
//Search will be required to remove the risk of
//duplicate enteries.!!
void insertRecordSingle(key datacode,char* name,char* weapon){


int i = hash(datacode);
linkInsertion(&hashtable[i],datacode,name,weapon);
}
//Hash Function
int hash(int key){
return key%SIZE;
}

//Link list insertion at end
void linkInsertion(struct record** head,int datacode,char* name,char* wpn){
struct record* newNode = malloc(sizeof(struct record));
newNode->code = datacode;
strcpy(newNode->det.name,name);
strcpy(newNode->det.wpn,wpn);
newNode->next = NULL;

struct record* temp = *head;
if(temp == NULL)
*head = newNode;
else{
while(temp->next!=NULL && temp->code!=datacode){
temp = temp->next;
}
if(temp->code==datacode){
printf("Duplicate ENTRY FAILS");
return;
}else{
temp->next = newNode;
}
}
}
//Printing whole hash table
void print_hash(){
int i;
struct record* current;
for(i=0;i<SIZE;i++){
current = hashtable[i];
while(current!=NULL){

printf("[%d]->",current->code);
current = current->next;
}
printf("[NULL]\n");

}
}
//Default initialization
void intialize(){
int i;

for(i=0;i<SIZE;i++)
hashtable[i] = NULL;
}

//Search
struct record* search(int key){
int i = hash(key);

if(hashtable[i]==NULL){
printf("No Record Found\n");
return NULL;
}
else{
struct record* temp = hashtable[i];
while(temp!=NULL && temp->code!=key)
temp = temp->next;

if(temp==NULL){
printf("No Record Found\n");
return NULL;
}
else{
printf("Record Found::\nName: %s\nWeapon: %s\n",temp->det.name,temp->det.wpn);
return temp;
}
}
}
