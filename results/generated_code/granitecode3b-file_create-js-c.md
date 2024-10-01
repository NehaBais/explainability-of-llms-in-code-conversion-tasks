Here's the C code that accomplishes the same task:
```
#include 
#include 
int main() {
 FILE *fp;
 int i, err;
 char filename[] = "output.txt";
 // Open output.txt in write mode
 if((fp = fopen(filename, "w")) == NULL) {
 printf("Error opening file %sn", filename);
 return 1;
 }
 // Write an empty string to the file
 fputs("", fp);
 fclose(fp);
 
 // Create a directory called docs
 err = mkdir("docs", S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH);
 if(err != 0) {
 printf("Error creating directory docsn");
 return 1;
 }
 
 // Reopen output.txt in write mode
 if((fp = fopen(filename, "w")) == NULL) {
 printf("Error opening file %sn", filename);
 return 1;
 }
 // Write an empty string to the file again
 fputs("", fp);
 fclose(fp);
 
 return 0;
}
```
The C code uses the `fopen` function to open a file in write mode and then use the `fputs` function to write an empty string to the file. It also uses the `mkdir` function to create a directory called "docs". The `S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH` argument passed to `mkdir` is used to set the permissions of the directory to allow reading, writing, and execution by the owner (user), group (users in the same group), others (not belonging to the group), and everyone else.

