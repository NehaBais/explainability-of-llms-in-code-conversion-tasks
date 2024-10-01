#include
#include
using namespace std;
int main() {
  int fd1 = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
  close(fd1);
  mkdir("docs", S_IRWXU);
  return 0;
}