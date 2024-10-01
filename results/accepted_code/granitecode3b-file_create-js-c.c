#include
#include
int main() {
  FILE *fp;
  int i, err;
  char filename[] = "output.txt";
  // Open output.txt in write mode
  if ((fp = fopen(filename, "w")) == NULL) {
    printf("Error opening file %sn", filename);
    return 1;
  }
  // Write an empty string to the file
  fputs("", fp);
  fclose(fp);

  // Create a directory called docs
  err = mkdir("docs", S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH);
  if (err != 0) {
    printf("Error creating directory docsn");
    return 1;
  }

  // Reopen output.txt in write mode
  if ((fp = fopen(filename, "w")) == NULL) {
    printf("Error opening file %sn", filename);
    return 1;
  }
  // Write an empty string to the file again
  fputs("", fp);
  fclose(fp);

  return 0;
}