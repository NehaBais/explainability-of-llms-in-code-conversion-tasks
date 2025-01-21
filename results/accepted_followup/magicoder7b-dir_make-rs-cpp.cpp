#include <sys/stat.h>
#include <unistd.h>

int main() {
  int result = mkdir("./path/to/dir", S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH);

  if (result != 0) {
    perror("An error occurred!");
  }
}