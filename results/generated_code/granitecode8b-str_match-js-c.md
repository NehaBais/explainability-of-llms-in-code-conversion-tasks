Here is the converted code from JavaScript to C that demonstrates the three types of string matching as required:
```
#include 
#include 
#include 
int main() {
 char stringA[] = "tacoloco";
 char stringB[] = "co";
 int q1, q2, q3;
 int i, j, n;
 regex_t preg;
 regmatch_t pmatch[1];
 char *p;
 

 // stringA starts with stringB
 q1 = strncmp(stringA, stringB, strlen(stringB)) == 0;

 // stringA contains stringB
 q2 = regexec(&preg, stringA, 1, pmatch, REG_NOTBOL);
 if (q2 != REG_NOMATCH) {
 printf("2: Is '%s' contained in '%s'? Yes, at index %d.\n", stringB, stringA, pmatch[0].rm_so);
 } else {
 printf("2: Is '%s' contained in '%s'? No.\n", stringB, stringA);
 }

 // multiple matches
 n = regcomp(&preg, stringB, REG_EXTENDED);
 if (n != 0) {
 fprintf(stderr, "Error compiling regular expression '%s': %d

