#include "link.h"

int main(int argc, char* argv[]){

myNode* head = NULL;
int num=0;
add(&head,32);
add(&head,21);
add(&head,28);
add(&head,32);
add(&head,71);
add(&head,92);
add(&head,109);

print_list(head);
num = count(head);
printf("\nCount: %d\n",num);

BubbleSortL(&head,num);
print_list(head);

return 0;
}
