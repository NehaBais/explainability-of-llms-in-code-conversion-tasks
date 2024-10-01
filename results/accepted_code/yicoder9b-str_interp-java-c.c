#include <stdio.h>

int main() {
  char lyric[50]; // Needs enough space for your string plus null character at
                  // end
  char adjective[] = "little"; // Note that we're defining the whole array here,
                               // not just the pointer to it

  sprintf(lyric, "Mary had a %s lamb", adjective);
  // Replace the first "%s" with the value of `adjective`

  printf("%s\n", lyric); // Print out the interpolated string
  return 0;
}