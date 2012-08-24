#include "link.h"

int main(){

head=(myNode*)0;

add(1);
add(2);
add(3);
add(4);
add(5);
add(6);

print_list();


if(head!=(myNode*)0){
temp=recursive_reverse(head);
temp->next=(myNode*)0;
}

print_list();

return 0;

}
