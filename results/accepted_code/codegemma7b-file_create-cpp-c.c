#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>

int main() {
  FILE *f = fopen("output.txt", "w");
  fclose(f);
  f = fopen("/output.txt", "w");
  fclose(f);

  mkdir("docs", 0755);
  mkdir("/docs", 0755);

  return 0;
}