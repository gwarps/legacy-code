#include "hash.h"


int main(){

struct record* rc = NULL;

intialize();
insertRecordFile("data.txt");
print_hash();
rc = search(22012);
printf("Details: %s",rc->det.name);
return 0;
}
