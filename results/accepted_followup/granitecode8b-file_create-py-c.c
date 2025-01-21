#include
#include
#include
int main() {
  char directory[1024] = "."; // current working directory
  FILE *file;
  mkdir(directory, S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH); // create directory
  file = fopen(strcat(directory, "/output.txt"), "w");
  fclose(file);                      // create file
  mkdir(strcat(directory, "/docs")); // create sub-directory

  directory[0] = '/'; // root directory
  mkdir(directory);
  file = fopen(strcat(directory, "/output.txt"), "w");
  fclose(file);
  mkdir(strcat(directory, "/docs"));

  return 0;
}