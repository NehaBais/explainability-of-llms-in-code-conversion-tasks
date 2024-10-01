#include
#include

int main() {
  FILE *fp;
  fp = fopen("input.txt", "w");
  if (fp == NULL) {
    perror("Error opening file");
    return 1;
  }
  fclose(fp);

  mkdir("docs", S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH);
  mkdir("/docs", S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH);

  return 0;
}