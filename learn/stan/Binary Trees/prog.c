#include "link.h"

int main(int argc,char* argv[]){

myNode* root = NULL;
myNode* copy = NULL;
myNode* head;

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

printf("\n---------------------\n");
print_tree(root);
printf("\n======================\n");

printf("Postorder traversal\n====================\n");
print_postorder(root);
printf("\n=====================\n");

printf("Size: %d\n",size(root));
printf("MaxDepth: %d\n",maxDepth(root));
printf("Min: %d\n",minValue(root));
printf("Max: %d\n",maxValue(root));
printf("Return for has path sum: %d\n",hasPathSum(root,atoi(argv[1])));

printPath(root);
printf("Same Trees: %d\n",same_tree(root,copy));

printf("Possible Combinations: %d\n",countTrees(3));
printf("If Binary tree: %d\n",isBST1(root));
printf("If Binart Version 2: %d\n",isBST2(root));

head = treeToList(root);

print_list(head);
return 0;
}
