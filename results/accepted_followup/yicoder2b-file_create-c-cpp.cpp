#include <fcntl.h>
#include <sys/stat.h>
#include <unistd.h>

enum Result { SUCCESS, FAILURE };

int main() {
  /* permissions are before umask */
  const mode_t perms = 0640; /* rights 0640 for rw-r----- */
  // equivalent to opening file
  int fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, perms);
  if (fd == -1) {   // error occurred
    return FAILURE; // indicating failure
  }
  // equivalent to closing file descriptor
  close(fd);

  /* equivalent to creating directory */
  const int dir_flags = 0750;           /* rights 0750 for rwxr-x--- */
  if (mkdir("docs", dir_flags) == -1) { // error occurred
    return FAILURE;                     // indicating failure
  }

  return SUCCESS; // indicating success
}