#include
#include
#include

typedef struct FileInfo_ {
  char name[50];
  long size;
} FileInfo;

int main() {
  const char *fileName1 = "input.txt";
  const char *fileName2 = "c:/input.txt";

  FileInfo files[2];

  // Populate the array with file information for each file
  strcpy(files[0].name, fileName1);
  files[0].size = -1; // Set initial size to an unknown value
  strcpy(files[1].name, fileName2);
  files[1].size = -1; // Set initial size to an unknown value

  // Verify the size of each file
  if (access(fileName1, F_OK) != -1 && access(fileName2, F_OK) != -1) {
    files[0].size = fso->GetFile(files[0].name))->Size;
    files[1].size = fso->GetFile(files[1].name))->Size;

    printf("The size of %s is %ld\n", files[0].name, files[0].size);
    printf("The size of %s is %ld\n", files[1].name, files[1].size);
  } else {
    printf("Unable to access the file %s or %s\n", files[0].name, files[1].name));
  }

  return 0;
}