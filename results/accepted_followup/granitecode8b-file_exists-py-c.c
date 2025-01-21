#include
#include
#include
int main() {
  // Check if input.txt exists in the current working directory
  char *filename = "input.txt";
  struct stat st;
  int rc = stat(filename, &st);
  if (rc == 0) {
    printf("File %s exists in the current working directory.n", filename);
  } else {
    printf("File %s does not exist in the current working directory.n",
           filename);
  }
  // Check if input.txt exists in the root filesystem
  char *filepath = "/input.txt";
  rc = stat(filepath, &st);
  if (rc == 0) {
    printf("File %s exists in the root filesystem.n", filepath);
  } else {
    printf("File %s does not exist in the root filesystem.n", filepath);
  }
  // Check if docs directory exists in the current working directory
  char *dirname = "docs";
  rc = stat(dirname, &st);
  if (rc == 0) {
    printf("Directory %s exists in the current working directory.n", dirname);
  } else {
    printf("Directory %s does not exist in the current working directory.n",
           dirname);
  }
  // Check if docs directory exists in the root filesystem
  char *dirpath = "/docs";
  rc = stat(dirpath, &st);
  if (rc == 0) {
    printf("Directory %s exists in the root filesystem.n", dirpath);
  } else {
    printf("Directory %s does not exist in the root filesystem.n", dirpath);
  }
  return 0;
}