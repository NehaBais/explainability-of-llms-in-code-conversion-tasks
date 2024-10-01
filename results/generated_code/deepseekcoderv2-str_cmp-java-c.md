## Answer:
```
#include <stdio.h>
int main() {
   char str1[20] = "Hello";
   char str2[20] = "Hello";
   int result;
   // Compare both strings using strcmp( )
   result=strcmp(str1, str2);
   if (result==0)
      printf("Strings are equal");
   else 
      printf("Strings are not equal");
   return 0;
}
```

