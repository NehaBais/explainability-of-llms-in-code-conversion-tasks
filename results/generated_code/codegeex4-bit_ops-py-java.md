Below is the equivalent Java code for your Python script:

```java
import java.util.*;

public class Main {
  
    public static void printBinary(int number, int width) {
        String binary = Integer.toBinaryString(number);
        while (binary.length() < width) {
            binary = "0" + binary;
        }
        System.out.println("0b" + binary);
    }

    public static void bitwiseBuiltIns(int width, int a, int b) {
        int mask = (1 << width) - 1;

        printBinary(a & b & mask, width);
        System.out.print("&");
        printBinary(b & mask, width);
        System.out.println("= " + Integer.toBinaryString((a & b) & mask));

        printBinary(a | b & mask, width);
        System.out.print("|");
        printBinary(b & mask, width);
        System.out.println("= " + Integer.toBinaryString((a | b) & mask));
        
        printBinary(a ^ b & mask, width);
        System.out.print("^");
        printBinary(b & mask, width);
        System.out.println("= " + Integer.toBinaryString((a ^ b) & mask));
        
        printBinary(~a & mask, width);
        System.out.println();
    }

    public static void helperFuncs(int width, int a) {
        int mask = (1 << width) - 1;
        bitwiseBuiltIns(width, a, a >> 1);
        bitwiseBuiltIns(width, a, a << 1);
    }
    
    public static void main(String[] args) {
        bitwiseBuiltIns(8, 27, 125);
        helperFuncs(8, 27);
    }
}
```

This code contains two functions `bitwiseBuiltIns` and `helperFuncs`. The `bitwiseBuiltIns` function performs the bitwise AND, OR, XOR and NOT operations on the given integers. It also prints out the operation being performed alongside the binary representation of the numbers involved in each operation.

The `helperFuncs` function simply calls the `bitwiseBuiltIns` function with the second number set to a shift or rotate of the first number. This is done for right and left shifts.
