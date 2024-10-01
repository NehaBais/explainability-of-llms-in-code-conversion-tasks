#include
#include
int main() {
  FILE *fileA = fopen("file.txt", "r");
  if (fileA == NULL) {
    printf("Error opening file!");
    return 1;
  }
  fseek(fileA, 0, SEEK_END);
  long sizeA = ftell(fileA);
  rewind(fileA);
  printf("%d B%n", sizeA);

  FILE *fileB = fopen("/file.txt", "r");
  if (fileB == NULL) {
    printf("Error opening file!");
    return 1;
  }
  fseek(fileB, 0, SEEK_END);
  long sizeB = ftell(fileB);
  rewind(fileB);
  printf("%d B%n", sizeB);

  return 0;
}