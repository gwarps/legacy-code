#include "link.h"

int main(){

myNode* listOne=NULL;
myNode* listTwo=NULL;
myNode* res = NULL;
myNode* recur = NULL;
add(&listOne,9);
add(&listOne,7);
add(&listOne,5);
add(&listOne,3);
add(&listOne,1);

add(&listTwo,10);
add(&listTwo,8);
add(&listTwo,6);
add(&listTwo,4);
add(&listTwo,2);

print_list(listOne);
print_list(listTwo);

//res = ShuffleOne(listOne,listTwo);

//print_list(res);

recur = Recursive_Shuffle(listOne,listTwo);
print_list(recur);
return 0;
}
