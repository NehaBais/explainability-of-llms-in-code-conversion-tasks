#include
#include
int access(const char *pathname, int mode);
int main(void) {
  char path1[] = "input.txt";
  char dir1[] = "docs";

  if (access(path1, F_OK)) {
    printf("'%s' does not exist.\n", path1);
  }

  if (access(dir1, F_OK))) {
        printf("'%s' does not exist.\n", dir1);
    }

  return 0;
}
int access(const char *pathname, int mode) { return (0); }