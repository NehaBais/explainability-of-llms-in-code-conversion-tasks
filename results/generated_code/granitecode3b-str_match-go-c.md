Here's the equivalent C code for the given Golang code snippet:
```c
#include 
int main() {
 const char* first = "abracadabra";
 const char* second = "abr";
 
 printf("1. %s starts with %s: %dnn", 
 first, second, strncmp(first, second, strlen(second)));
 
 int i = strstr(first, second) - first;
 printf("2. %s contains %s: %dn", 
 first, second, i >= 0);
 if (i >= 0) {
 printf("2.1. at location %d,n");
 char* sub = strchr(first + i + strlen(second), 0);
 for (char* p = first + i + strlen(second); p != sub; p++) {
 printf("2.2. at location %d,n", p - first);
 }
 printf("2.2. and that's alln");
 }
 
 printf("3. %s ends with %s: %dn", 
 first, second, strncmp(first + strlen(first) - strlen(second), second, strlen(second)));
 
 return 0;
}
```
The C code uses the `strcmp` function to determine if the first string starts with the second string. It also uses the `strstr` function to find the location of the first string containing the second string. The `strchr` function is used to find all occurrences of the second string within the first string. Finally, the C code uses the `strcmp` function again to determine if the first string ends with the second string.

