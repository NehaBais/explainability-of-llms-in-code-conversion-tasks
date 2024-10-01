#include
#include
#include
int main() {
  FILE *file = fopen("input.txt", "r");
  if (file == NULL) {
    perror("Error opening file");
    return 1;
  }

  fseek(file, 0, SEEK_END);
  long size = ftell(file);
  rewind(file);

  printf("Size of file input.txt is %ld bytes.%n", size, &size);

  fclose(file);

  DIR *root_dir = opendir("/");
  if (root_dir == NULL) {
    perror("Error opening directory");
    return 1;
  }

  struct dirent *entry;
  while ((entry = readdir(root_dir)) != NULL) {
    printf("%s ", entry->d_name);
  }

  closedir(root_dir);

  return 0;
}