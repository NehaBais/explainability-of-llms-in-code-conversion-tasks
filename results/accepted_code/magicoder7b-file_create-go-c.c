#include <dirent.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

void createFile(const char *fn) {
  int fd =
      open(fn, O_CREAT | O_EXCL, 0666); // Create the file with exclusive access
                                        // and set permissions to rw-rw-rw
  if (fd == -1) {
    printf("Error: %s\n", strerror(errno));
    return;
  }

  close(fd); // Close the file after it's been created
  printf("File %s created!\n", fn);
}

void createDir(const char *dn) {
  int result = mkdir(dn, 0755); // Set permissions to rwxr-xr-x (644 in decimal)
  if (result == -1) {
    printf("Error: %s\n", strerror(errno));
    return;
  }

  printf("Directory %s created!\n", dn);
}

int main() {
  createFile("input.txt");
  createFile("/input.txt");
  createDir("docs");
  createDir("/docs");
  return 0;
}