#include <string.h>

char *s = ", World";
char *str = "Hello";

str = strcat(str, s);

printf("%s", str);