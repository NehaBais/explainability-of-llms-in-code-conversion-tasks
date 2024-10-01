#include <stdio.h>
#include <string.h>

int main() {
  char *myStrings[] = {"prepended to", " my string"};
  size_t n = sizeof(myStrings) / sizeof(myStrings[0]); // get the size of array
  char prepended[256] = ""; // initialize an empty string

  for (int i = 0; i < n; ++i) {
    strcat(prepended,
           myStrings[i]); // concatenate each strings to the prepended variable
  }
  printf("%s\n", prepended); // print out the prepended string
  return 0;
}