#include <direct.h> //For directory operations
#include <stdio.h>  //For file existence check functions

int main() {
  _chdir(
      "C:\\"); // Change to current directory (or / for Unix-like systems), but
               // this won't work outside of Windows cmd/powershell terminal
  if (!_fso.FileExists("input.txt")) { // For file existence check
    printf("File does not exist\n");
  } else {
    printf("File exists\n");
  }
  if (!_fso.FolderExists("docs")) { // For folder existence check
    printf("Folder does not exist\n");
  } else {
    printf("Folder exists\n");
  }
  return 0;
}