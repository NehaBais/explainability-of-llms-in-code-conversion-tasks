Error: expected "FILENAME" or <FILENAME>
Fix: add the appropriate file extension to the filename
Code:
```c
#include 
#include 
int main() {
  if (rename("input.txt", "output.txt") != 0) {
    perror("Rename failed");
    return 1;
  }

  if (rename("docs", "mydocs") != 0) {
    perror("Rename failed");
    return 1;
  }

  if (rename("/input.txt", "/output.txt") != 0) {
    perror("Rename failed");
    return 1;
  }

  if (rename("/docs", "/mydocs") != 0) {
    perror("Rename failed");
    return 1;
  }

  return 0;
}
```

