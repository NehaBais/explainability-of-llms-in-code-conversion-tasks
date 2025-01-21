The error messages indicate that there are several issues with the C code. Let's go through them one by one.
1. The compiler is unable to find the header file `stdio.h`, which contains the `printf` and `scanf` functions. To fix this, you need to include the header file where these functions are defined. You can do this by adding the line `#include stdio.h` at the beginning of your code.
2. The compiler is unable to find the function `pow`, which is used in the last line of the code. To fix this, you need to include the header file `math.h`, which contains the `pow` function. You can do this by adding the line `#include math.h` at the beginning of your code.
3. The error message indicates that there is a missing closing parenthesis in the first argument of the `printf` function, which is trying to print the value of `int(rr)`. To fix this, you need to add a closing parenthesis after the expression inside the `printf` function.
4. The error message indicates that there is an incorrect data type for the second argument of the `pow` function, which expects a double as input. To fix this, you need to change the data type of the `input2` variable from `int` to `double`.
Here's the corrected code:
```c
#include 
#include 
 
int main() {
  int input1, input2;

  printf("Enter first integer: ");
  scanf("%d", &input1);

  printf("Enter second integer: ");
  scanf("%d", &input2);

  int qq = input1 + input2;
  printf("Sum: %d\n", qq);

  int ww = input1 - input2;
  printf("Difference: %d\n", ww);

  int ee = input1 * input2;
  printf("Product: %d\n", ee);

  float rr = (float)input1 / (float)input2;
  printf("Integer quotient: %f\n", int(rr));
  printf("Float quotient: %.1f\n", rr);

  double tt = input1 - input2;
  printf("Whole Remainder: %d\n", int(tt) - tt * -1);

  return 0;
}
```

