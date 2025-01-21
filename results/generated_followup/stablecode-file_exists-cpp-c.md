Error: `no member named 'mode' in 'struct stat'`

Fix: Replace `st.mode` with `st.st_mode`. 

Corrected code:
```c
#include 
#include 
#include 
#include 

void file_exists(const char *path) {
  struct stat st;

  if (stat(path, &st))) {
    printf("%s does not exist\n", path);
  } else {
    if (S_ISDIR(st.st_mode))) {
            printf("%s is a directory\n", path);
        }
    else {
      printf("%s exists with a file size of %ld bytes.\n", path, st.st_size);
    }
  }
}

int main() {
  file_exists("input.txt");
  file_exists("zero_length.txt");
  file_exists("docs/input.txt");
  file_exists("docs/zero_length.txt");

  return 0;
}
```
