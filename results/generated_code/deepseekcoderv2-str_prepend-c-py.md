#include <stdio.h>
#include <stdlib.h>
int main() {
char string[100]="my String";
char* cstr="Changed ";
printf("Before: %s\n",string);
sprintf(string,"%s%s",cstr,string);
printf("After: %s\n",string);
}

