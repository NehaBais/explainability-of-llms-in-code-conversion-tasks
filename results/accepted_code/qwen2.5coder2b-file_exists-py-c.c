#include <stdio.h>
#include <sys/stat.h>

void check_file(const char *filename) {
  if (access(filename, R_OK)) {
    printf("The file %s does not exist or is not accessible.\n", filename);
  } else {
    printf("The file %s exists and is accessible.\n", filename);
  }
}

void check_directory(const char *directoryname) {
  if (access(directoryname, X_OK)) {
    printf("The directory %s does not exist or is not accessible.\n",
           directoryname);
  } else {
    printf("The directory %s exists and is accessible.\n", directoryname);
  }
}

int main() {
  check_file("input.txt");
  check_directory("docs");

  // Check the current working directory
  char cwd[1024];
  if (getcwd(cwd, sizeof(cwd)) != NULL) {
    printf("Current working directory: %s\n", cwd);
    check_file("input.txt");
    check_directory("docs");
  } else {
    perror("Error getting current working directory");
  }

  return 0;
}