#include <stdio.h>

int main() {
  char adjective[] = "little";
  char lyric[100]; // Assuming there won't be a string longer than 99 characters

  printf("Mary had a %s lamb",
         adjective); // This will print: Mary had a little lamb on the console

  snprintf(lyric, sizeof(lyric), "Mary had a %s lamb", adjective);
  // this stores the result in lyric
  return 0;
}