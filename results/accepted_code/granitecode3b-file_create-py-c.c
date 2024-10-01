#include
#include
#include
void create_file(const char *directory) {
  FILE *fp;
  char filename[1024];
  sprintf(filename, "%s/output.txt", directory);
  fp = fopen(filename, "w");
  fclose(fp);
  mkdir(directory, "docs");
}
int main() {
  create_file("."); // current directory
  create_file("/"); // root directory
  return 0;
}