#include
int main() {
  char *myString = "prepended to";
  const char *appended = "my string";
  int lengthOfPrepended = strlen(myString);
  char *prepended = (char *)malloc(lengthOfPrepended + strlen(appended) + 1);
  strcat(prepended, myString);
  strcat(prepended, appended);
  printf("%s", prepended);
  free(prepended);
  return 0;
}