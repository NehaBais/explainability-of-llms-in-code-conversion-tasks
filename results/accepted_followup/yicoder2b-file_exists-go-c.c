#include <stdio.h>
#include <unistd.h> // To include function for getting current process's user ID, group ID and process ID

void printStat(const char *p) {
  struct stat st;           // Declare struct stat
  if (stat(p, &st) == -1) { // stat() returns -1 on failure
    perror(p);              // Print error if stat fails
    return;                 // Exit function
  }

  // Check if it's a directory
  if (S_ISDIR(st.st_mode))
    printf("%s is a directory\n", p); // If yes, print the directory
  else
    printf("%s is a file\n", p); // else print it's not a directory
}

int main() {
  printStat("input.txt");
  printStat("/input.txt");
  printStat("docs");
  printStat("/docs");
  return 0; // Return 0 for successful exit code
}