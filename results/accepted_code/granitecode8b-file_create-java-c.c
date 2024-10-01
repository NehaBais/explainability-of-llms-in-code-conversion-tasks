#include
#include
int main() {
  FILE *file;
  struct stat sb;
  if (stat("output.txt", &sb) == -1) {
    file = fopen("output.txt", "w");
    fclose(file);
  }
  if (stat("/output.txt", &sb) == -1) {
    file = fopen("/output.txt", "w");
    fclose(file);
  }
  mkdir("docs", 0755);
  mkdir("/docs", 0755);
  return 0;
}