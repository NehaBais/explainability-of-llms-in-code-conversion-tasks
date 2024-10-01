#include <stdio.h>
void main() {
  FILE *infile = fopen("C:\\Users\\s136275\\Documents\\test.txt", "r");
  int size = fread(infile);
  printf("%i\n", size);
}