#include
int main() {
  const char *filename = "output.txt";
  FILE *fp;

  if ((fp = fopen(filename, "w")) == NULL) {
    perror("error creating output.txt");
    return 1;
  }
  fclose(fp);

  if (mkdir("docs", S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH) == -1) {
    perror("error creating docs directory");
    return 1;
  }

  return 0;
}