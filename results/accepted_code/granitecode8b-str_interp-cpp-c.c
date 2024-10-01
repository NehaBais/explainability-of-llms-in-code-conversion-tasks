#include
#include
int main() {
  char original[] = "Mary had a X lamb.";
  char toBeReplaced[] = "X";
  char replacement[] = "little";
  char newString[100];
  int index = 0;
  while (original[index] != 0) {
    if (original[index] == 'X') {
      strcpy(&newString[index], replacement);
      index += strlen(replacement);
    } else {
      newString[index] = original[index];
      index++;
    }
  }
  printf("String after replacement: %sn", newString);
  return 0;
}