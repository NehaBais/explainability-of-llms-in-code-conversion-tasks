#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 256 // max length of the string is set to 256 characters
int main(void) {
  char a[MAX];                 // declaring array for file name input from user
  printf("Enter File Name :"); // prompting user to enter file name
  gets(a);                     // taking filename as an input in variable 'a'
  FILE *f;
  f = fopen(a, "r");
  if (f == NULL)
    printf("\nFile does not exist or cannot be opened.\n");
  else {
    int c = 0;
    for (; !feof(f);
         ++c) // counting the no. of characters in file using feof() function.
      getc(f);
    printf("The number of charcaters is %d.", c);
    rewind(f);
  }
}