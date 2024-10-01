#include
int main() {
  char *str = "Hello world";
  char *appendage = "!!!!";
  char result[strlen(str) + strlen(appendage)];
  strcpy(result, str);
  strcat(result, appendage);
  printf("%s", result);
  return 0;
}