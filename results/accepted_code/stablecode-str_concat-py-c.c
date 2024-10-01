#include <stdio.h>
#include <string.h>

int main() {

  char s1[10] = "hello";

  // concatenate and print string variables
    strcat(s1, " world"));
    printf("%s\n", s1);

    // assign value to another string variable
    char s2[50];
    strcpy(s2, s1);
    strcat(s2, " world");
    printf("%s\n", s2);

    // illustrate the operation using join function
    char *strings[] = {s1, "world", "mom"};
    char joined[100];
    strcpy(joined, ", ");
    strcat(joined, strings[0]));
    strcat(joined, ", "));
    strcat(joined, strings[1]));
    printf("%s\n", joined);

    return 0;
}