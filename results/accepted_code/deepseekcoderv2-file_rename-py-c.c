#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  // Rename files and directories in current working directory (cwd)
  system("mv input.txt output.txt");
  system("mv docs mydocs");

  // Add the separator character to specify the full path of files/directories
  // to be renamed in root
  char cwd[FILENAME_MAX];   // Buffer for storing current working directory path
  getcwd(cwd, sizeof(cwd)); // Get the current working directory path and store
                            // it in 'cwd' buffer

  strcat(cwd, "/input.txt"); // Append "input.txt" to the end of the cwd string
  system("mv input.txt output.txt"); // Rename file "input.txt" as "output.txt"
                                     // within current working directory (cwd)

  strcat(cwd, "/docs");     // Append "docs" to the end of the cwd string
  system("mv docs mydocs"); // Rename directory "docs" as "mydocs" within
                            // current working directory (cwd)

  return 0;
}