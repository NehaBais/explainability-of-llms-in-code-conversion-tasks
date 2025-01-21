#include
#include
struct stat {
  int st_mode;
  int st_size;
};
int stat(const char *path, struct stat *buf);
void perror(const char *s);
int printf(const char *format, ...);
int main() {
  struct stat buf;
  const char *path = "input.txt";
  if (stat(path, &buf) != 0) {
    perror("Error getting information about input.txt");
    return 1;
  }
  printf("%s: ", path);
  if (S_ISDIR(buf.st_mode)) {
    printf("is a directoryn");
  } else {
    printf("is a filen");
  }
  char *path2 = "/input.txt";
  if (stat(path2, &buf) != 0) {
    perror("Error getting information about /input.txt");
    return 1;
  }
  printf("%s: ", path2);
  if (S_ISDIR(buf.st_mode)) {
    printf("is a directoryn");
  } else {
    printf("is a filen");
  }
  const char *path3 = "docs";
  if (stat(path3, &buf) != 0) {
    perror("Error getting information about docs");
    return 1;
  }
  printf("%s: ", path3);
  if (S_ISDIR(buf.st_mode)) {
    printf("is a directoryn");
  } else {
    printf("is a filen");
  }
  const char *path4 = "/docs";
  if (stat(path4, &buf) != 0) {
    perror("Error getting information about /docs");
    return 1;
  }
  printf("%s: ", path4);
  if (S_ISDIR(buf.st_mode)) {
    printf("is a directoryn");
  } else {
    printf("is a filen");
  }
}