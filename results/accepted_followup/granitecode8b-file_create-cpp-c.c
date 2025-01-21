#include
#include
int main() {
  FILE *file = fopen("output.txt", "w");
  fclose(file);
  file = fopen("/output.txt", "w");
  fclose(file);

  mkdir("docs", 0755);
  mkdir("/docs", 0755);
}