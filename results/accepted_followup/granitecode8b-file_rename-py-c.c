#include
#include
#include
int main() {
  rename("input.txt", "output.txt");
  rename("docs", "mydocs");

  char cwd[1024];
  getcwd(cwd, sizeof(cwd));
  strcat(cwd, "/input.txt");
  strcat(cwd, "output.txt");
  rename(cwd, "output.txt");

  cwd[0] = '/';
  strcat(cwd, "docs");
  strcat(cwd, "mydocs");
  rename(cwd, "mydocs");

  return 0;
}