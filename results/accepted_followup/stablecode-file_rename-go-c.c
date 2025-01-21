#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char full_current_path[500] = "";
  char full_current_path_here[500] = "docs";
  char file_name[50];
  char new_file_name[50];
  char docs_directory[50] = "docs";
  char mydocs_directory[50] = "mydocs";
  size_t pos;
  char command[255];

  // Code for moving file from one directory to another.
    sprintf(command, "mv %s/%s %s/output.txt", full_current_path_here, file_name));
    system(command);

    pos = strpos(full_current_path_here, '/'));
    if (pos != string::npos) {
        sprintf(command, "mv docs mydocs"));
        system(command);
    }

    getcwd(current_working_directory, sizeof(current_working_directory)));
    printf("Current working directory: %s\n", current_working_directory));

    return 0;
}