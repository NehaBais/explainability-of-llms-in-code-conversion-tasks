#include
#include
int main() {
  struct stat info;
  if (stat("input.txt", &info) == -1) {
    perror("Error getting file info");
    return 1;
  }
  if (S_ISDIR(info.st_mode)) {
    printf("%s is a directoryn", "input.txt");
  } else {
    printf("%s is a filen", "input.txt");
  }
  if (stat("/input.txt", &info) == -1) {
    perror("Error getting file info");
    return 1;
  }
  if (S_ISDIR(info.st_mode)) {
    printf("%s is a directoryn", "/input.txt");
  } else {
    printf("%s is a filen", "/input.txt");
  }
  if (stat("docs", &info) == -1) {
    perror("Error getting file info");
    return 1;
  }
  if (S_ISDIR(info.st_mode)) {
    printf("%s is a directoryn", "docs");
  } else {
    printf("%s is a filen", "docs");
  }
  if (stat("/docs", &info) == -1) {
    perror("Error getting file info");
    return 1;
  }
  if (S_ISDIR(info.st_mode)) {
    printf("%s is a directoryn", "/docs");
  } else {
    printf("%s is a filen", "/docs");
  }
  return 0;
}