C does not have a built-in function to rename or move directories, so we will need to implement this functionality manually. For that we use the `opendir`, `readdir`, `closedir`, and `rename` functions from the POSIX standard library, which are available in Linux/Unix systems.

Here is a simple example:

```C
#include <stdio.h>
#include <dirent.h>
#include <string.h>
#include <unistd.h>

void move_directory(char *src, char *dest) {
    DIR *dir;
    struct dirent *ent;
   
    if ((dir = opendir(src)) != NULL) {
        while ((ent = readdir(dir)) != NULL) {
            if (strcmp(ent->d_name, ".") == 0 || strcmp(ent->d_name, "..") == 0)
                continue;

            char new_src[FILENAME_MAX], new_dest[FILENAME_MAX];
            sprintf(new_src, "%s/%s", src, ent->d_name);
            sprintf(new_dest, "%s/%s", dest, ent->d_name);

            if (rename(new_src, new_dest) < 0) {
                perror("Error while moving files");
            }
        }
        closedir(dir);
    } else {
        perror("Error opening directory");
    }
}

int main() {
    move_directory("docs", "mydocs");
    move_directory("/docs", "/mydocs");

    return 0;
}
```

Note: This C code assumes that the directories are empty. It doesn't check if the source directory exists, or whether there is an already-existing directory with the target name, or anything else that might make this code fail. If these checks were needed, you would need to add them yourself.
