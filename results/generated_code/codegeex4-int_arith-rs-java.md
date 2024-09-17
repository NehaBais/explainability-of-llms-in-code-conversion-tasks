Below is the equivalent Java code:

```java
public class Main {
  public static void main(String[] args) {
    int a = Integer.parseInt(args[0]);
    int b = Integer.parseInt(args[1]);

    System.out.println("sum:              " + (a + b));
    System.out.println("difference:       " + (a - b));
    System.out.println("product:          " + (a * b));
    System.out.println("integer quotient: " + (a / b)); // truncates towards zero
    System.out.println("remainder:        " + (a % b)); // same sign as first operand
  }
}
```

In Java, the integer division operator (`/`) truncates towards zero. The remainder operator (`%`) returns the remainder when one number is divided by another. If both numbers are positive, it will have the same sign as the dividend. If one of them is negative, its sign will be the same as the divisor (i.e., the second number in the division operation).

Please note that this code does not include error handling and assumes that exactly two arguments are passed when running the program.
