In C, array size must be known at compile time and hence we have to initialize it with some value. When we use this approach as in line 7, our compiler will not know how much space would be required for string 's' and therefore an error arises. To fix the above mentioned issue, you could define a constant variable that contains the size of your array or could allocate memory at runtime based on the actual size of the string. 

Here is the corrected C code:
```c
#include <stdio.h>
#include <string.h>

int main() {
  char s[] = "hello";
  printf("%s literal\n", s);
  char s2[100] = s;       // Here we assume 100 as the size of string 's'
  strcat(s2, " literal"); // strcat for concatenating
  printf("%s\n", s2);     // prints the combined string
  return 0;
}
```
