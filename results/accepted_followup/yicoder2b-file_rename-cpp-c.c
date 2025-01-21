#include <fcntl.h>
#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

int main() {
  char oldname[] = "input.txt";
  char newname[] = "output.txt";
  struct stat st;
  if (stat(oldname, &st) == 0 && S_ISREG(st.st_mode)) {
    rename(oldname, newname);
  }

  chdir("./docs/"); // change to directory here
  struct stat st2;
  char newdir[] = "mydocs";
  if (stat(newdir, &st2) != -1 && S_ISDIR(st2.st_mode)) {
    rename(newdir, oldname); // rename to old name
  } else if (mkdir(newdir, 0755) == 0) {
    // create a new directory with the given permissions
    rename(newdir, oldname); // rename to old name
  }
  return 0;
}