Here's the equivalent C code for the given Java code:
```
#include 
#include 
int main() {
 FILE *fileA = fopen("file.txt", "r");
 if (fileA == NULL) {
 printf("Error opening file!");
 return 1;
 }
 fseek(fileA, 0, SEEK_END);
 long sizeA = ftell(fileA);
 rewind(fileA);
 printf("%d B%n", sizeA);
 
 FILE *fileB = fopen("/file.txt", "r");
 if (fileB == NULL) {
 printf("Error opening file!");
 return 1;
 }
 fseek(fileB, 0, SEEK_END);
 long sizeB = ftell(fileB);
 rewind(fileB);
 printf("%d B%n", sizeB);
 
 return 0;
}
```
The equivalent C code for the given Java code is shown above. This code uses the `fopen` function to open a file, the `fseek` function to set the file pointer to the end of the file, and the `ftell` function to get the current position of the file pointer. The `rewind` function is used to reset the file pointer back to the beginning of the file. Finally, the sizes of the two files are printed using the `printf` function.

