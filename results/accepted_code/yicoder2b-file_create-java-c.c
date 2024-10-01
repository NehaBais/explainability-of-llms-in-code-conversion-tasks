#include <fcntl.h>
#include <stdio.h>
#include <sys/stat.h>
#include <unistd.h>

int main(void) {
  char output_path[] = "output.txt";
  char root_path[] = "/";
  struct stat buffer;

  // Check if file exists and create it if not
  if (stat(output_path, &buffer) == 0 && S_ISREG(buffer.st_mode)) {
    unlink(output_path); /* If the file already exists then delete it */
  } else {
    int flags = O_CREAT | O_EXCL | O_WRONLY;
    open(output_path, flags, 0644); // mode of file (chmod)
  }

  // Do the same for root directory
  if (stat(root_path, &buffer) == 0 && S_ISDIR(buffer.st_mode)) {
    rmdir(root_path); /* If the directory already exists then delete it */
  } else {
    int flags = O_CREAT | O_EXCL | O_WRONLY;
    open(root_path, flags, 0755); // mode of file (chmod)
  }

  return 0;
}