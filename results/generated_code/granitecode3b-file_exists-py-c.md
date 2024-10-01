Here's the C code that accomplishes the same task:
```
#include 
#include 
int main() {
 struct stat st;
 
 // Check if input.txt exists in the current working directory
 if (stat("input.txt", &st) == 0 && S_ISREG(st.st_mode)) {
 printf("Input file exists.\n");
 } else {
 printf("Input file does not exist.\n");
 }
 
 // Check if docs exists in the current working directory
 if (stat("docs", &st) == 0 && S_ISDIR(st.st_mode)) {
 printf("Docs directory exists.\n");
 } else {
 printf("Docs directory does not exist.\n");
 }
 
 // Check if input.txt exists in the filesystem root
 if (stat("/input.txt", &st) == 0 && S_ISREG(st.st_mode)) {
 printf("Input file exists in /input.txt.\n");
 } else {
 printf("Input file does not exist in /input.txt.\n");
 }
 
 // Check if docs exists in the filesystem root
 if (stat("/docs", &st) == 0 && S_ISDIR(st.st_mode)) {
 printf("Docs directory exists in /docs.\n");
 } else {
 printf("Docs directory does not exist in /docs.\n");
 }
 
 return 0;
}
```
This code uses the `stat` function to check if a file or directory exists and has the correct permissions. The `S_ISREG` and `S_ISDIR` macros are used to determine if the file type is regular (text) or directory, respectively. The output of the program will indicate whether each file or directory exists and has the correct permissions.

