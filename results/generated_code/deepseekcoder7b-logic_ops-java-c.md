In C programming language, the logical operators are written as follows : && (AND), || (OR) and ! (NOT). Here's how you can write the same function in C:

```c
#include <stdio.h>
#include <stdbool.h>  // include if your compiler doesn't support bool keyword

void logic(bool a, bool b){
  printf("a AND b: %d\n", (int)a && (int)b);   //cast boolean to int for printing
  printf("a OR b: %d\n", (int)a || (int)b);
  printf("NOT a: %d\n", !(int)a);
}
```
Please note that, unlike Java, C doesn't have a built-in boolean data type. However, it does support the "stdbool.h" header file which provides Boolean datatypes and values, allowing for easier work with logical operations in C programs. 

The function above assumes you are using a compiler or environment that supports C99 features (like GCC). It also uses "%d", not "%s" to print the integer value of bool since `printf` does not support string format specifiers on boolean types directly. Casting boolean variables to int for printing purpose is common in such cases. 

If you are using a compiler or environment that doesn't support C99 features, then replace the "bool" and "%d", with "int" wherever it appears in this function. And make sure your code looks like :

#include <stdio.<｜begin▁of▁sentence｜>
void logic(int a, int b){
  printf("a AND b: %d\n", a && b);
  printf("a OR b: %d\n", a || b);
  printf("NOT a: %d\n", !a);
}

