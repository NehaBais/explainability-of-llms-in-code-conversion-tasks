Here is the converted code from Java to C:
```
#include 
#include 
int renameFile(const char* oldname, const char* newname) {
 int success;
 FILE *file = fopen(oldname, "r");
 if (file != NULL) {
 fclose(file);
 success = (rename(oldname, newname) == 0);
 } else {
 struct stat sb;
 success = (stat(oldname, &sb) == 0) && (mkdir(newname, sb.st_mode) == 0);
 if (success) {
 DIR *dir = opendir(oldname);
 char newpath[PATH_MAX];
 struct dirent *entry;
 while ((entry = readdir(dir)) != NULL) {
 if (strcmp(entry->d_name, ".") == 0 || strcmp(entry->d_name, "..") == 0) {
 continue;
 }
 snprintf(newpath, sizeof(newpath), "%s/%s", newname, entry->d_name);
 success = renameFile(entry->d_name, newpath);
 if (!success) {
 break;
 }
 }
 closedir(dir);
 rmdir(oldname);
 }
 return success;
}
int test(const char* type, const char* oldname, const char* newname) {
 printf("The following %s called %s", type, oldname);
 int success = renameFile(oldname, newname);
 if (success) {
 printf(" was renamed as %sn", newname);
 } else {
 printf(" could not be renamed into %sn", newname);
 }
 return success;
}
int main() {
 test("file", "input.txt", "output.txt");
 test("file", "/", "/");
 test("directory", "docs", "mydocs");
 test("directory", "/", "/");
 return 0;
}
```
This code renames a file or directory and its contents recursively. It first checks if the old name is a file, and if so, it attempts to rename it using the `rename()` function. If the old name is not a file, it assumes it is a directory and creates a new directory with the new name, then iterates through the files in the old directory and renames them recursively, finally deleting the old directory.
Note that this code uses some system-specific functions (`stat()`, `mkdir()`, `opendir()`, `readdir()`, `closedir()`, `rmdir()`) that may not be available on all platforms. Additionally, it assumes that the user has the necessary permissions to rename files and directories.

