
## Java Code

```java
import java.util.Scanner;

public class BitwiseBuiltIns {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int width = sc.nextInt();
        int a = sc.nextInt();
        int b = sc.nextInt();

        // AND, OR, XOR operations
        System.out.println("AND: " + Integer.toBinaryString(a & b));
        System.out.println("OR:  " + Integer.toBinaryString(a | b));
        System.out.println("XOR: " + Integer.toBinaryString(a ^ b));

        // NOT operation
        System.out.println("NOT: " + Integer.toBinaryString(~a));

        // Shifts and rotates
        int n = 1;
        for (int i = 0; i < width - 1; i++) {
            System.out.println("RIGHT: " + Integer.toBinaryString((n << i)));
        }

        // Left shift operations
        for (int i = 0; i < width - 1; i++) {
            System.out.println("LEFT: " + Integer.toBinaryString(a & ((1 << n) - 1)));
        }
    }
}
```
