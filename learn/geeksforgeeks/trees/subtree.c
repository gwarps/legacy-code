#include "tree.h"


int main(int argc,char* argv[]){

int k = atoi(argv[1]);
myNode* root = NULL;
myNode* copy = NULL;
myNode* src  = NULL;

myNode* test1 = NULL;
myNode* test2 = NULL;


insert(&root,15);
insert(&root,13);
insert(&root,20);
insert(&root,8);
insert(&root,18);
insert(&root,11);
insert(&root,3);
insert(&root,24);
insert(&root,80);

//Sample copy
insert(&copy,15);
insert(&copy,13);
insert(&copy,20);
insert(&copy,8);
insert(&copy,18);
insert(&copy,11);
insert(&copy,3);
insert(&copy,24);
insert(&copy,80);

//test Insert
insert(&test1,13);
insert(&test1,8);
insert(&test1,3);
//insert(&test1,11);

//Test2 Insert
insert(&test2,20);
insert(&test2,18);
insert(&test2,24);
insert(&test2,80);

printAncestors(root,80);
printf("\n");
print_inorder(root);
printf("\n");

src = search(root,k);
if(src == NULL)
printf("Search Fails\n");
else
printf("Search Success\n");

printf("Is Same? : %d\n",isSame(root,copy));
printf("SubTree??: %d\n",isSub(root,test1));

//Range test
//printRange(root,16,30);
printf("\n");
//printAncestors(root,13);
printf("Level: %d\n",getLevel(root,k,1));
printf("Inorder Sus: %d\n",inorder_sus(root,search(root,k)));
printf("\n");
return 0;
}
