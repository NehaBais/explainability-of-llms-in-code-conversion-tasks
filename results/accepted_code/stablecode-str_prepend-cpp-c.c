#include <stdio.h>
#include <string.h>

int main() {
  char myStrings[][20] = {"prepended to", "my string"};
  char prepended[100];

  strcpy(prepended, "This is prepended: ");
    strcat(prepended, myStrings[0]));
    strcat(prepended, myStrings[1]));

    printf("%s\n", prepended);

    return 0;
}