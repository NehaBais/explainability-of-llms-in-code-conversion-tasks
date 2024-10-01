#include
int main() {
  char adjective[] = "big";
  char lyric[100];
  sprintf(lyric, "Mary had a %s lamb.", adjective);
  printf("%sn", lyric);
  return 0;
}