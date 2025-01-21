#include
#include
#include

int main() {
  FILE *f;

  f = fopen("output.txt", "w");
  fclose(f);
  f = fopen("/output.txt", "w");
  fclose(f);

  mkdir("docs", 0777);
  mkdir("/docs", 0777);

  return 0;
}