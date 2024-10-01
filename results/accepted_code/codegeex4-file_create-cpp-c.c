#include <stdio.h>
#include <sys/stat.h>

int main() {
  FILE *f = fopen("output.txt", "w");
  fclose(f);

  f = fopen("/output.txt", "w");
  fclose(f);

  mkdir("docs", 0777);
  mkdir("/docs", 0777);
}