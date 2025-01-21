#include <cstdio>
#include <cstring>

int main() {
  const char *filename = "input.txt";
  if (access(filename, F_OK) ==
      0) { // Check for file existence in current working directory
    printf("File exists\n");
  } else {
    printf("File does not exist or is not readable in current directory\n");
  }
  const char *dirname = "/docs";
  if (access(dirname, R_OK | F_OK) ==
      0) { // Check for file existence and readability in root directory
    printf("Directory exists and is readable in root\n");
  } else {
    printf("Directory does not exist or is not readable in root\n");
  }
  return 0;
}