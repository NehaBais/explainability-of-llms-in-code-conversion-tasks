#include
#include
#include
int main() {
  struct stat file_info;
  char *file_path = "input.txt";

  if (stat(file_path, &file_info) == -1) {
    perror("Error getting file size");
  } else {
    printf("File size: %ld bytesn", (long)file_info.st_size);
  }

  char *root_path = "/input.txt";

  if (stat(root_path, &file_info) == -1) {
    perror("Error getting file size");
  } else {
    printf("File size: %ld bytesn", (long)file_info.st_size);
  }

  return 0;
}