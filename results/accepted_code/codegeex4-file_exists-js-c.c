#include <stdio.h>
#include <unistd.h>

int main() {
  // Check for input.txt in current directory
  if (access("input.txt", F_OK) != -1)
    printf("File 'input.txt' exists in current directory.\n");
  else
    printf("File 'input.txt' does not exist in current directory.\n");

  // Check for input.txt in filesystem root
  if (access("/input.txt", F_OK) != -1)
    printf("File 'input.txt' exists at filesystem root.\n");
  else
    printf("File 'input.txt' does not exist at filesystem root.\n");

  // Check for docs in current directory
  if (access("docs", F_OK) != -1 && access("docs", R_OK | X_OK) == 0)
    printf("Directory 'docs' exists and is readable/executable in current "
           "directory.\n");
  else
    printf("Directory 'docs' does not exist or isn't readable/executable in "
           "current directory.\n");

  // Check for docs in filesystem root
  if (access("/docs", F_OK) != -1 && access("/docs", R_OK | X_OK) == 0)
    printf("Directory 'docs' exists and is readable/executable at filesystem "
           "root.\n");
  else
    printf("Directory 'docs' does not exist or isn't readable/executable at "
           "filesystem root.\n");

  return 0;
}