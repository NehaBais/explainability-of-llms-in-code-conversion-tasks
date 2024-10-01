#include <fcntl.h>
#include <stdio.h>
#include <sys/stat.h>
#include <unistd.h>

int main() {
  char oldname[] = "input.txt";
  char newname[] = "output.txt";
  struct stat st;
  if (stat(oldname, &st) == 0 && S_ISREG(st.st_mode)) {
    rename(oldname, newname);
  }

  chdir("./docs/"); // change to directory here
  char newdir[] = "mydocs";
  if (mkdir(newdir, 0755) == 0 && stat(newdir, &st) == 0 && S_ISDIR) {
    rename(newdir, oldname); // rename to old name
  }
  return 0;
}