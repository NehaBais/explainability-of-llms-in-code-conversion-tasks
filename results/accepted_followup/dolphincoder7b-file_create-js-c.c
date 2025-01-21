#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void fct(int err) {
  if (err != 0)
    perror("An error occurred");
}

int main() {
  int out = open("./output.txt", O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
  close(out);

  int out2 = open("/output.txt", O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
  close(out2);

  int docs = mkdir("./docs", 0755);
  if (docs == -1)
    fct(-1);

  int docs2 = mkdir("/docs", 0755);
  if (docs2 == -1)
    fct(-1);

  return 0;
}