#include <stdio.h>

int main() {
  char *extra = "little";
  char *format = "Mary had a %s lamb.";
  char new_str[100];

    snprintf(new_str, sizeof(new_str)), 
    sprintf(new_str, format, extra));

    printf("%s\n", new_str);

    return 0;
}