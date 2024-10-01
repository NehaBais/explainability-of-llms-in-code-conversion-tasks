#include <stdio.h>

int main() {
  FILE *fp1, *fp2;
  if ((fp1 = fopen("input.txt", "r")) == NULL) {
    perror("Error opening file input.txt");
    return 1;
  }
  fp2 = fopen("output.txt", "w");
  while (fgetc(fp1) != EOF)
    fputc(fgetc(fp1), fp2);
  fclose(fp1);
  fclose(fp2);

  if ((fp1 = fopen("docs", "r")) == NULL) {
    perror("Error opening file docs");
    return 1;
  }
  fp2 = fopen("mydocs", "w");
  while (fgetc(fp1) != EOF)
    fputc(fgetc(fp1), fp2);
  fclose(fp1);
  fclose(fp2);

  if ((fp1 = fopen("/input.txt", "r")) == NULL) {
    perror("Error opening file /input.txt");
    return 1;
  }
  fp2 = fopen("/output.txt", "w");
  while (fgetc(fp1) != EOF)
    fputc(fgetc(fp1), fp2);
  fclose(fp1);
  fclose(fp2);

  if ((fp1 = fopen("/docs", "r")) == NULL) {
    perror("Error opening file /docs");
    return 1;
  }
  fp2 = fopen("/mydocs", "w");
  while (fgetc(fp1) != EOF)
    fputc(fgetc(fp1), fp2);
  fclose(fp1);
  fclose(fp2);

  return 0;
}