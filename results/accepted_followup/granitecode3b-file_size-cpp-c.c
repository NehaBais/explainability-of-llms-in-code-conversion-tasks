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

  DIR *dirp;
  struct dirent *dp;
  if ((dirp = opendir(".")) == NULL) {
    perror("Error opening directory");
    return 1;
  }

  while ((dp = readdir(dirp)) != NULL) {
    printf("%s\n", dp->d_name);
  }

  closedir(dirp);

  return 0;
}