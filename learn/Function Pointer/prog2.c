#include "link.h"

int main(){

void (*say)(char* message) = NULL;

say = say_loud;
say("WHAT");

say = say_soft;
say("I know a secret!");

return 0;

}
