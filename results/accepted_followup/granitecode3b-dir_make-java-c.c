#include
int main(int argc, char *argv[]) {
  int result = mkdir("path/to/dir", S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH);
  if (result == -1) {
    // Handle error
  } else {
    // Directory created successfully
  }
  return 0;
}