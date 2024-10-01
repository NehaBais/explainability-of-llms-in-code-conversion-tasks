#include <string.h>

const char *str = "abcdefgh";

int n = 2;
int m = 3;

//  *  starting from n characters in and of m length;
const char *substr1 = str + n;
const char *substr2 = str + n;
substr2[m] = '\0';

//  * starting from n characters in, up to the end of the string;
const char *substr3 = str + n;

//  * whole string minus last character;
const char *substr4 = str;
substr4[strlen(str) - 1] = '\0';

//  * starting from a known character within the string and of m length;
int idx = strcspn(str, "b");
const char *substr5 = str + idx;

//  * starting from a known substring within the string and of m length.
int idx2 = strcspn(str, "bc");
const char *substr6 = str + idx2;

printf("Substring 1: %s\n", substr1);
printf("Substring 2: %s\n", substr2);
printf("Substring 3: %s\n", substr3);
printf("Substring 4: %s\n", substr4);
printf("Substring 5: %s\n", substr5);
printf("Substring 6: %s\n", substr6);