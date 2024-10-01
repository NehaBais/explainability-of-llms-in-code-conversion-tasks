#include
#include
#include
int main() {
  std::string fileName = argv[1];
  struct stat fileMetadata;
  if (stat(fileName.c_str(), &fileMetadata) == -1) {
    perror("Error accessing metadata");
    return 1;
  }
  printf("Size of %s is %ld bytes\n", fileName.c_str(), fileMetadata.st_size);
  return 0;
}