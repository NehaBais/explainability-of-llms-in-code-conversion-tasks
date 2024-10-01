#include
#include
int main() {
  char *path = "./path/to/dir";
  if (mkdir(path, S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH) == -1 &&
      errno != EEXIST) {
    perror("Error creating directory");
    exit(EXIT_FAILURE);
  }
  return 0;
}