#include
int main() {
  const char *adjective = "little";
  const char *lyric = "Mary had a %s lamb";
  char interpolated[100];

  printf(lyric, adjective);
  puts(interpolated);

  return 0;
}