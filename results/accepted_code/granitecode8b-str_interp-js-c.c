#include
#include
int main() {
  char original[] = "Mary had a X lamb";
  char little[] = "little";
  char replaced[100];
  strcpy(replaced, original);
  strcat(replaced, " and a ");
  strcat(replaced, little);
  strcat(replaced, " lamb.");
  printf("%s", replaced);
  return 0;
}