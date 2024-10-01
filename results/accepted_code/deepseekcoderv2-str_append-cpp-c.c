#include <stdio.h>
int main() {
  char greeting[] = "Hello";
  strcat(greeting, ", world!");
  puts(greeting);
  return 0;
}