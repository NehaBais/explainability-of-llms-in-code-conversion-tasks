#include
int main() {
  // Verifying if a file called input.txt and a directory called docs exist in
  // the current working directory
  if (access("docs/input.txt", F_OK) != -1) {
    printf("File and directory exists in the current working directoryn");
  } else {
    printf(
        "File or directory does not exist in the current working directoryn");
  }

  // Verifying if a file called input.txt and a directory called docs exist in
  // the filesystem root
  if (access("/docs/input.txt", F_OK) != -1) {
    printf("File and directory exists in the filesystem rootn");
  } else {
    printf("File or directory does not exist in the filesystem rootn");
  }

  return 0;
}