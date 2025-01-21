Sure! Here is the equivalent Java code for the given C code:

```java
public class BitwiseOperations {

    public static void bitwise(int a, int b) {
        System.out.println("a and b: " + (a & b));
        System.out.println("a or b: " + (a | b));
        System.out.println("a xor b: " + (a ^ b));
        System.out.println("not a: " + (~a));
        
        // Left shift
        System.out.println("a << n: " + (a << b));
        
        // Right shift
        System.out.println("a >> n: " + (a >> b));
        
        // Convert signed integer to unsigned for logical right shift
        int c = a;
        System.out.println("c >>> b: " + (c >>> b));
    }

    public static void main(String[] args) {
        bitwise(5, 2); // Example call with a=5 and b=2
    }
}
```

Explanation:
1. **Bitwise AND (`&`)**: Computes the bitwise AND of `a` and `b`.
2. **Bitwise OR (`|`)**: Computes the bitwise OR of `a` and `b`.
3. **Bitwise XOR (`^`)**: Computes the bitwise XOR of `a` and `b`.
4. **Bitwise NOT (`~`)**: Computes the bitwise negation of `a`.
5. **Left Shift (`<<`)**: Shifts `a` to the left by `b` positions.
6. **Right Shift (`>>`)**: Shifts `a` to the right by `b` positions, preserving the sign (arithmetic shift).
7. **Logical Right Shift (`>>>`)**: Shifts `a` to the right by `b` positions without preserving the sign (logical shift).

The `main` method demonstrates how to call the `bitwise` function with example values. You can replace `5` and `2` with any other integers as needed.
