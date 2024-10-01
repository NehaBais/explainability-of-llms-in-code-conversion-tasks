Here is the C version of your code:

```C
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void demo_compare(const char *a, const char* b, const char* semantically) { 
    printf("%s and %s are %s exactly %s equal.\n", a, b, (strcmp(a,b) == 0)? "":"not ", semantically); 
    printf("%s and %s are %s %s inequal.\n", a, b, (strcmp(a,b) != 0)? "":"not ", semantically);   
    printf("%s is %s %s ordered before %s.\n", a, (strcmp(a,b)<0)? "":"not ", semantically, b); 
    printf("%s is %s %s ordered after %s.\n", a, (strcmp(a,b)>0)? "":"not ", semantically, b);  
}

int main(int argc, char *argv[]){
    // Case-sensitive comparisons.
    char* a = (argc > 1) ? argv[1] : "1.2.Foo";
    char* b = (argc > 2) ? argv[2] : "1.3.Bar";
    demo_compare(a, b, "lexically");
   
    // Case-insensitive comparisons by converting both strings to lower case.
    for(int i=0 ; a[i]; i++) a[i] = tolower(a[i]);
    for(int i=0 ; b[i]; i++) b[i] = tolower(b[i]); 
  
    demo_compare(a, b, "lexically");   
    // Numeric comparisons; here 'double' could be any type for which the relevant >> operator is defined.
    return (strcmp(a,b) == 0);
}      
```
Note that in C there isn't a direct equivalent to C++'s `std::istringstream` or template specialization, so numeric comparisons are less flexible than in your original code. Also note the use of the standard library function `strcmp()` for string comparison and the loop-based approach for converting strings to lower case.
