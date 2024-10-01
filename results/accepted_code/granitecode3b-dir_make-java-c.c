#include
#include
int main(int argc, char *argv[]) {
  struct stat st;
  int result = stat("path/to/dir", &st);
  if (result == -1) {
    // If directory doesn't exist, create it.
    mkdir("path/to/dir", S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH);
  } else {
    // Directory already exists.
  }
  return 0;
}