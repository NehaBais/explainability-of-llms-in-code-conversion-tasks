#include <stdlib.h>

int main() {
  system("touch output.txt && mkdir docs");
  system("/bin/mkdir -p /docs"); // Make directory recursively, creating parents
                                 // as needed

  system("cd .. && touch output.txt && mkdir docs");
  system("/bin/mkdir -p /output.txt && mkdir -p /docs"); // Create in parent
                                                         // directory

  return 0;
}