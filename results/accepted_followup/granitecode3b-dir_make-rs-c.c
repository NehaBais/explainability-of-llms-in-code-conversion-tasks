#include
int main() {
  char *path = "./path/to/dir";
  mode_t permissions = S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH;
  int result = mkdir(path, permissions);
  if (result == -1 && errno != EEXIST) {
    perror("Error creating directory");
    exit(EXIT_FAILURE);
  }
  return 0;
}