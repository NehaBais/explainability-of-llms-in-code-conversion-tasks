#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <unistd.h>

int main() {
  FILE *f;

  // create output.txt file in current working directory
  f = fopen("output.txt", "w");
  if (f == NULL) {
    printf("Error %d on opening output.txt: %s\n", errno, strerror(errno));
    return 1;
  }
  fclose(f);

  // create output.txt file in filesystem root
  f = fopen("/output.txt", "w");
  if (f == NULL) {
    printf("Error %d on opening /output.txt: %s\n", errno, strerror(errno));
    return 1;
  }
  fclose(f);

  // create empty directory called docs
  if (mkdir("docs", S_IRWXU | S_IRWXG | S_IROTH) != 0) {
    printf("Error %d on creating directory 'docs': %s\n", errno,
           strerror(errno));
    return 1;
  }

  // create empty directory called docs in filesystem root
  if (mkdir("/docs", S_IRWXU | S_IRWXG | S_IROTH) != 0) {
    printf("Error %d on creating directory '/docs': %s\n", errno,
           strerror(errno));
    return 1;
  }

  return 0;
}