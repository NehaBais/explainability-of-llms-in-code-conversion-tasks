#include
#include
int main() {
  // Rename a file called input.txt into output.txt and a directory called docs
  // into mydocs in the current working directory
  rename("input.txt", "output.txt");
  rename("docs", "mydocs");

  // Rename a file called input.txt into output.txt and a directory called docs
  // into mydocs in the filesystem root
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