#include <stdio.h>

int main() {
  int a, b;

  printf("Enter two integers: ");
  scanf("%d %d", &a, &b);

  // Sum of a and b
  printf("%d + %d = %d\n", a, b, a + b);

  // Difference between a and b
  printf("%d - %d = %d\n", a, b, a - b);

  // Product of a and b
  printf("%d * %d = %d\n", a, b, a * b);

  // Integer quotient of a and b
  int quotient = (a > b) ? (a / b) : ((b / a) - 1);
  printf("%d )/ %d = %.0f\n", a, b, (float)quotient); // truncates towards 0

  // Remainder of the division of a and b
  int remainder = a % b;
  printf("%d %% %d = %d\n", a, b, remainder); // same sign as first operand

  // Exponentiation operator not available in C.
  // You can calculate exponentiation manually using multiplication operation.
  // Here is an example of how you can do it:

  ```c
#include <stdio.h>

      int
      main() {
    int a, b;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    int exponentiation = 1;
    for (int i = 0; i < b; i++) {
      exponentiation *= a;
    }

    printf("%d ^ %d = %.0f\n", a, b,
           (float)exponentiation); // same sign as first operand

    return 0;
  }
    ```
    Note that in C, there is no built-in operator for exponentiation. Therefore, you need to manually calculate the exponentiation using multiplication operation. In the example above, we calculate the exponentiation by multiplying the base number (a) with itself for 'b' times. The result will be the calculated exponentiation value.
    ```

    Remember that in C, the integer division operator (/) always truncates towards 0 (towards negative infinity). Therefore, when calculating the quotient of two numbers, you need to consider how it rounds towards zero.
    In the example above, we have already taken care of rounding towards zero while calculating the integer quotient.

    Hope this helps! Let me know if you have any further questions.

    Best regards,

    Sandeep Kulkarni


    ```
    Note: This code is provided as an example and may require modifications based on your specific requirements.

    Good luck with your programming task! If you have any further questions or need assistance, feel free to ask.

    Best regards,

    Sandeep Kulkarni