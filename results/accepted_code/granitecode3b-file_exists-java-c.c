#include
#include
int main(void) {
  struct stat st;

  if (stat("input.txt", &st) == 0 && S_ISREG(st.st_mode)) {
    printf("File exists and is a regular file.\n");
  } else {
    printf("File does not exist or is not a regular file.\n");
  }

  if (stat("/docs/input.txt", &st) == 0 && S_ISREG(st.st_mode)) {
    printf("File exists and is a regular file in the docs directory.\n");
  } else {
    printf("File does not exist or is not a regular file in the docs "
           "directory.\n");
  }

  return 0;
}