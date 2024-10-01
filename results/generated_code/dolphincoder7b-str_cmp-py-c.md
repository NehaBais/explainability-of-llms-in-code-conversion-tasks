Below is the C equivalent of the Python code provided:

```C
#include <stdio.h>
#include <ctype.h>

int compare(char* a, char* b){
    printf("%s is of type %s and %s is of type %s\n",
           a, "char*", b, "char*");
    if (*a<* *b)      printf("%s is strictly less than   %s\n",  a, b);
    if (*a<=*b)      printf("%s is less than or equal to  %s\n",  a, b);
    if (*a>*b)      printf("%s is strictly greater than   %s\n",  a, b);
    if (*a>=*b)      printf("%s is greater than or equal to  %s\n",  a, b);
    if (strcmp(a,b)==0)    printf("%s is equal to  %s\n",  a, b);
    if (strcmp(a,b)!=0)     printf("%s is not equal to  %s\n",  a, b);
    if (a==b)      printf("%s has object identity with  %s\n",  a, b);
    if (a!=b)      printf("%s has negated object identity with  %s\n",  a, b);

    return 0;
}

int main() {
    compare("YUP","YUP");
    compare("BALL","BELL");
    compare("24","123");
    compare(24, 123);
    compare(5.0, 5);
    return 0;
}
```

Note: This code does not handle case-insensitive comparisons and may not work as expected for non-ASCII strings. The provided C code also doesn't support comparing two numbers when one is numeric string and the other is a number. This might need some more code adjustments depending on how you want to implement these functionalities.
Please note that `is` in Python checks object identity, which means it checks if both variables refer to the same memory location. In C, `==` checks for equality in values, not memory locations. If two pointers point to different places in memory, they are not equal even though their values are the same. To check for object identity in C you can use the `==` operator for pointer comparisons. 

Also note that comparing strings lexically in Python is usually done using the `<` and `>` operators, which compare the ASCII codes of each character. However, this behavior can be altered with locale-specific settings or by changing the comparison order. The provided C code compares strings lexically by comparing their ASCII values. 

In terms of string comparisons, both Python and C provide various ways to perform these tasks. For example, in C you can use `strcoll()` (for locale-sensitive comparison) or `strcmp()` for a case sensitive comparison. In Python, you have the `locale` module which provides locale-aware methods like `strcoll()`, `strcoll_l()`, and `strxfrm()`. 

Finally, regarding how to compare numbers in the C language: comparing two integers (`int`) or floating point numbers (`double`) is usually done using the `<`, `>`, `<=`, `>=` operators. However, you can convert each number to a string and then compare these strings (using `strcmp()`) for lexical comparison if necessary.
