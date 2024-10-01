Here's the C code that performs the same task as the JavaScript code, while also handling multiple occurrences of a string for part 2 and printing the location of the match for part 2:
```c
#include 
int main() {
 char* stringA = "tacoloco";
 char* stringB = "co";
 int q1, q2, q3;
 int q2multi_index = -1;
 int i;
 preg_t preg2;
 int q2matches[5];
 int q2match_count = 0;
 
 // stringA starts with stringB
 q1 = !strcmp(stringA, stringB);
 
 // stringA contains stringB
 q2multi_index = strstr(stringA, stringB) - stringA;
 
 // multiple matches
 preg_compile(stringB, 0, &preg2, 0);
 while (q2multi_index != -1) {
 q2matches[q2match_count] = q2multi_index;
 q2match_count++;
 q2multi_index = strstr(NULL, stringB) - stringA;
 }
 
 // stringA ends with stringB
 q3 = !strcmp(stringA + strlen(stringA) - strlen(stringB), stringB);
 
 printf("1: Does '%s' start with '%s'? %s\n",
 stringA, stringB, (q1 ? "Yes." : "No."));
 printf("2: Is '%s' contained in '%s'? %s",
 stringB, stringA, (q2multi_index == -1 ? "No" : "Yes"));
 if (q2match_count > 1) {
 printf(", at index");
 if (q2match_count > 2) {
 printf("es");
 }
 for (i = 0; i < q2match_count; i++) {
 printf(" %d", q2matches[i]);
 }
 printf(".n");
 }
 printf("3: Does '%s' end with '%s'? %s\n",
 stringA, stringB, (q3 ? "Yes." : "No."));
 
 return 0;
}
```
Note that the C code uses a regular expression to find all occurrences of `stringB` in `stringA`, and stores their indexes in an array called `q2matches`. The regular expression is compiled using `preg_compile()` and stored in a `preg_t` variable called `preg2`. The `strstr()` function is used to search for the first occurrence of `stringB` in `stringA`, and the index of that match is stored in `q2multi_index`.

