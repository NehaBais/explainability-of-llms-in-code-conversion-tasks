Here's the C++ code that accomplishes the same task as the JavaScript code:
```c++
#include 
#include 
#include 
int main() {
 std::ofstream output("output.txt");
 if (!output) {
 std::cerr << "Error opening file!" << std::endl;
 return 1;
 }
 
 if (mkdir("docs", S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH)) {
 perror("Error creating directory");
 return 1;
 }
 
 return 0;
}
```
In this C++ code, we use the `std::ofstream` class to create a new file called "output.txt" in the current working directory and write an empty string to it. We also check for any errors that may occur during file operations using `if (!output)`.
We then use the `mkdir` function with the S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH flags to create a new directory called "docs" in the filesystem root. We also check for any errors that may occur during directory creation using `if (mkdir("docs", S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH))`.

