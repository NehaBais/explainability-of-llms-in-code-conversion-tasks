```java
public class ArithmeticOperations {

    public static void main(String[] args) {
        int a = Integer.parseInt(args[0]);
        int b = Integer.parseInt(args[1]);

        int sum = a + b;
        int difference = a - b;
        int product = a * b;
        double division = (double) a / b;  // Cast to double for quotient
        int remainder = a % b;

        System.out.println("a + b = " + sum);
        System.out.println("a - b = " + difference);
        System.out.println("a * b = " + product);
        System.out.println("a / b = " + division);
        System.out.println("a % b = " + remainder);
    }
}
```

**Note:**

* The `main` method is the entry point of the Java program.
* The `args` array contains the command-line arguments passed to the program.
* We cast `a / b` to `double` for the quotient to handle decimal values.
* The `%` operator in Java also calculates the remainder.
* The sign of the remainder matches the sign of the first operand (`a`).
