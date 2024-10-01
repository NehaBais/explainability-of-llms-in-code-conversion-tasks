#include
#include
void file_exists(const char *path) {
  printf("%s", path);
  if (access(path, F_OK) != -1) {
    struct stat sb;
    stat(path, &sb);
    if (S_ISDIR(sb.st_mode)) {
      printf(" is a directoryn");
    } else if (S_ISREG(sb.st_mode)) {
      printf(" exists with a file size of %ld bytes.n", sb.st_size);
    }
  } else {
    printf(" does not existn");
  }
}
int main() {
  file_exists("input.txt");
  file_exists("zero_length.txt");
  file_exists("docs/input.txt");
  file_exists("docs/zero_length.txt");
  return 0;
}