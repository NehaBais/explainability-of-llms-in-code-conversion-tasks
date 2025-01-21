The error message indicates that there are multiple compilation errors in the C code provided. The first error is related to including the "iostream" library, which is not supported in C. The second error is related to using a namespace, which is also not supported in C. The third error is related to using input/output functions, which are not available in C.
The fix for this error would be to remove the "#include" line and use "stdio.h" instead. Additionally, the "using namespace std;" statement can be replaced with the appropriate standard library include statements. Finally, the input/output functions should be replaced with their C equivalents.
Here is the corrected code:
```c
#include
int main() {
  int input1, input2;
  printf("Enter first number: ");
  scanf("%d", &input1);
  printf("Enter second number: ");
  scanf("%d", &input2);
  int sum = input1 + input2;
  int difference = input1 - input2;
  int product = input1 * input2;
  float quotient = (float)input1 / input2;
  int remainder = input1 % input2;
  printf("Sum:                   %d%c", sum, endl);
  printf("Difference:    %d%c", difference, endl);
  printf("Product:       %d%c", product, endl);
  printf("Quotient:      %f%c", quotient, endl);
  printf("Remainder:     %d%c", remainder, endl);
  return 0;
}
```

