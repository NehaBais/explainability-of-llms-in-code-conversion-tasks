#include
#include
#include
#include
int main() {
  char myStrings[][20] = {"prepended to", "my string"};
  char prepended[100];
  strcpy(prepended, "");
  for (int i = 0; i < sizeof(myStrings) / sizeof(myStrings[0]); i++) {
    strcat(prepended, myStrings[i]);
  }
  printf("%s", prepended);
  return 0;
}