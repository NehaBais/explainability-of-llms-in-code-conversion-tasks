In C++ the `rename` function is also available and has the same syntax as in C. However, a difference to note is that the C++ standard library doesn't include any header file for functions like rename() by default. You have to explicitly include `cstdio` or `unistd.h` (for POSIX systems) to use such system-dependent functions:
```cpp
#include <cstdio> //or #include <unistd.h> for POSIX systems

int main() 
{
  //renaming files in the current working directory
  if(rename("input.txt", "output.txt") == 0){
    printf("Successfully renamed input.txt to output.txt\n");
  } else {
    printf("Failed to rename input.txt to output.txt\n");
  }

  if(rename("docs", "mydocs") == 0){
    printf("Successfully renamed docs directory to mydocs\n");
  } else {
    printf("Failed to rename docs directory to mydocs\n");
  }

  //renaming files in the filesystem root (this might require superuser privileges)
  if(rename("/input.txt", "/output.txt") == 0){
    printf("Successfully renamed /input.txt to /output.txt\n");
  } else {
    printf("Failed to rename /input.txt to /output.txt\n");
  }

  if(rename("/docs", "/mydocs") == 0){
    printf("Successfully renamed /docs directory to /mydocs\n");
  } else {
    printf("Failed to rename /docs directory to /mydocs\n");
  }

  return 0;
}
```
Note: This will only work if you have the appropriate permissions for renaming files/directories. The function return value is checked here, and a message is printed depending on whether or not the rename operation was successful.

Also note that C++ does not provide a built-in way to access root directory ("/") as it depends on the operating system and the environment in which your program is running. Some systems allow you to write directly to this directory, while others do not.
