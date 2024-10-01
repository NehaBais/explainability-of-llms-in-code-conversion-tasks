Below is the converted code from Golang to C:

```c
#include <stdio.h>
#include <string.h>
#include <dirent.h>
#include <sys/stat.h>

int rename_file(const char* current_path, const char* file_name) {
    char new_file_name[50];
    strcpy(new_file_name, "output.txt");

    char full_current_path[100];
    strcpy(full_current_path, current_path);
    strcat(full_current_path, "/"));
    strcat(full_current_path, file_name));

    char docs_directory[50] = "docs";
    char mydocs_directory[50] = "mydocs";

    char full_current_path_here[100];
    strcpy(full_current_path_here, full_current_path));
    size_t pos = strpos(full_current_path_here, '/'));
    if (pos != string::npos) {
        string root_directory = full_current_path_here.substr(0, pos));
        if (root_directory == "/") {
            char command[100];
            sprintf(command, "mv %s %s", file_name, new_file_name));
            system(command);

            sprintf(command, "mv %s %s", docs_directory, mydocs_directory));
            system(command);
        } else {
            char command[100];
            sprintf(command, "mv %s/%s %s/output.txt", root_directory.c_str(), file_name, root_directory.c_str());
            system(command);

            sprintf(command, "mv docs mydocs"));
            system(command);
        }
    } else {
        printf("File or directory not found\n");
    }

    return 0;
}

int main() {
    char current_working_directory[100];
    getcwd(current_working_directory, sizeof(current_working_directory)));
    printf("Current working directory: %s\n", current_working_directory));

    rename_file(current_working_directory, "input.txt"));
    rename_file("/", "input.txt"), "output.txt");
    rename_file("/", "docs"), "mydocs");

    return 0;
}
```

Please note that in C language there is no standard function to handle file and directory operations like Golang's `os` package does. So the code above manually implements these functionalities using system-specific commands (e.g., `mv`, `cp`, `rm`) and basic string manipulation functions (`strcpy`, `strcat`, `strpos`). 

Also, please note that the C language has no built-in way to handle errors or exceptions, so you need to implement error handling manually using your own error checking functions.
