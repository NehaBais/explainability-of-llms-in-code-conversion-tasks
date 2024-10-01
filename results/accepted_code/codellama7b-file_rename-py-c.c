#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  char *input_txt = "input.txt";
  char *output_txt = "output.txt";
  char *docs = "docs";
  char *mydocs = "mydocs";

  rename(input_txt, output_txt);
  rename(docs, mydocs);

  return 0;
}