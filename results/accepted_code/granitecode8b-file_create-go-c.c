#include
#include
int main(int argc, char *argv[]) {
  FILE *file;
  DIR *dir;

  // Create file in current directory
  file = fopen("output.txt", "w");
  if (file == NULL) {
    perror("Error creating file");
    return 1;
  }
  fclose(file);
  printf("File output.txt created!n");

  // Create file in root directory
  file = fopen("/output.txt", "w");
  if (file == NULL) {
    perror("Error creating file");
    return 1;
  }
  fclose(file);
  printf("File /output.txt created!n");

  // Create directory in current directory
  mkdir("docs", 0777);
  if (chdir("docs") != 0) {
    perror("Error changing directory");
    return 1;
  }
  chdir("../");
  if (mkdir("docs", 0777) != 0) {
    perror("Error creating directory");
    return 1;
  }
  printf("Directory docs created!n");

  // Create directory in root directory
  mkdir("/docs", 0777);
  if (chdir("/docs") != 0) {
    perror("Error changing directory");
    return 1;
  }
  chdir("../");
  if (mkdir("/docs", 0777) != 0) {
    perror("Error creating directory");
    return 1;
  }
  printf("Directory /docs created!n");

  return 0;
}