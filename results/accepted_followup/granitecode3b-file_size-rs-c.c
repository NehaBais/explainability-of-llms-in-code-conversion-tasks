#include
#include
int main() {
  char *file_name = "file_name";
  struct stat st;
  if (stat(file_name, &st) == -1) {
    perror("stat");
    exit(EXIT_FAILURE);
  }
  printf("Size of file.txt is %ld bytes", (long)st.st_size);
  return 0;
}