#include
#include
#include
int main() {
  const char *file_name = "output.txt";
  const char *dir_name = "docs";
  if (access(dir_name, F_OK) != -1) {
    fprintf(stderr, "Directory already existsn");
    exit(1);
  }
  mkdir(dir_name, S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH);
  FILE *file = fopen(file_name, "w");
  if (file == NULL) {
    fprintf(stderr, "Error creating filen");
    exit(1);
  }
  fclose(file);
  const char *root_dir = "/";
  if (access(root_dir, F_OK) != -1) {
    fprintf(stderr, "Directory already exists in root directoryn");
    exit(1);
  }
  mkdir(root_dir, S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH);
  file = fopen(file_name, "w");
  if (file == NULL) {
    fprintf(stderr, "Error creating filen");
    exit(1);
  }
  fclose(file);
  return 0;
}