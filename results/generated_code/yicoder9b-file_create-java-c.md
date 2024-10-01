The equivalent C code to create a file and directory is shown below:

```c
#include <stdio.h> 
#include <stdlib.h> 
#include <errno.h>  // For error handling

int main() {
   FILE *fp;
   char separator = '/'; // This might differ based on the platform/OS (It is '/' for Unix-like OS and '\' for Windows)

   // Create file "output.txt" in current working directory
   if ((fp = fopen("output.txt", "w")) == NULL) {
      printf("Error opening the file: %s\n", strerror(errno)); 
      exit(-1);  // Exit program with error status
   } else {
      fclose(fp); // Close file pointer
   }

   // Create empty directory "docs" in current working directory
   if (mkdir("docs", 0777) == -1) {
     printf("Error creating the directory: %s\n", strerror(errno));  
      exit(-1); // Exit program with error status
   }

   // Create file "output.txt" in root directory
   if ((fp = fopen((char[]){separator, 'o', 'u', 't', 'p', 'u', 't', '.', 't', 'x', 't', '\0'}, "w")) == NULL) {
      printf("Error opening the file in root: %s\n", strerror(errno)); 
      exit(-1);  // Exit program with error status
   } else {
      fclose(fp); // Close file pointer
   }

   // Create empty directory "docs" in root directory
   if (mkdir((char[]){separator, 'd', 'o', 'c', 's', '\0'}, 0777) == -1) {
      printf("Error creating the directory in root: %s\n", strerror(errno));  
      exit(-1); // Exit program with error status
   }

   return (0);
}
```
In this code, we are using fopen to create a file named "output.txt" and mkdir from the standard library to create an empty directory called "docs". We also handle errors that may arise during these operations by checking the return values of these functions and printing error messages if necessary. The separator is '/' which is used for Unix-like OS systems, it might differ based on the platform/OS.

Remember this code needs to be compiled in a C environment (like gcc) because some of the features don't exist or behave differently in Java. Also remember that you may need to include additional libraries and adjust the code according to your specific operating system as the file system operations can vary across different systems.
