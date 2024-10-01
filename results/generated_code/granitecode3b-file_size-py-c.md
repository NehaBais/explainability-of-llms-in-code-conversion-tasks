Here's the equivalent C code for the given Python code:
```
#include 
#include 

int main() {
 struct stat file_stat1, file_stat2;
 
 // Get the size of input.txt in the current working directory
 if (stat("input.txt", &file_stat1) == 0) {
 printf("File size of input.txt: %ldn", file_stat1.st_size);
 } else {
 perror("Error getting file size of input.txt");
 }
 
 // Get the size of input.txt in the file system root
 if (stat("/input.txt", &file_stat2) == 0) {
 printf("File size of /input.txt: %ldn", file_stat2.st_size);
 } else {
 perror("Error getting file size of /input.txt");
 }
 
 return 0;
}
```
This code uses the stat function from the unistd.h library to get the size of the input.txt file in both the current working directory and the file system root. The struct stat is used to store information about a file, including its size. The printf function is used to print out the size of each file.

