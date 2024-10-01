#include
#include
int main(int argc, char *argv[]) {
  if (argc != 2) {
    fprintf(stderr, "usage: %s <path>\n", argv[0]);
    return 1;
  }
  mkdir(argv[1], S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH);
  return 0;
}