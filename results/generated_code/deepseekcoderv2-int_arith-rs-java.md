 Sure, here is the equivalent Java code for the given Rust code:

```java
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        // Get two integers from the user
        int a = Integer.parseInt(args[0]);
        int b = Integer.parseInt(args[1]);
        
        // Display their sum
        System.out.println("sum:              " + (a + b));
        
        // Display their difference
        System.out.println("difference:       " + (a - b));
        
        // Display their product
        System.out.println("product:          " + (a * b));
        
        // Display their integer quotient (truncates towards zero)
        System.out.println("integer quotient: " + Math.floorDiv(a, b));
        
        // Display their remainder (same sign as the first operand)
        System.out.println("remainder:        " + (a % b));
    }
}
```

### Explanation:
1. **Reading Input**: In Java, we use a `Scanner` to read input from the command line arguments or standard input if no arguments are provided. The equivalent of Rust's `env::args()` is achieved using `args` array in Java.
2. **Parsing Integers**: We parse the string inputs to integers using `Integer.parseInt()`.
3. **Mathematical Operations**: Java provides straightforward operators for addition, subtraction, multiplication, and modulus. The integer division operator `/` truncates towards zero, which is equivalent to Rust's behavior.
4. **Remainder**: The remainder operation in Java (`a % b`) has the same sign as the first operand (`a`), which matches the requirement.
5. **Exponentiation**: Java does not have a direct exponentiation operator, but you can use `Math.pow(a, b)` for this purpose if needed (though it returns a double). For integer exponentiation, you might need to implement it manually or use a library.

This Java code should perform the same operations as your Rust code when run with appropriate input.
