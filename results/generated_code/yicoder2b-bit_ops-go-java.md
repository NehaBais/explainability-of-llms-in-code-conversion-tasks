This is the Java equivalent of your Golang code. Please note that both Golang and Java use bitwise operation for logical operations, left shift ('<<') and arithmetic shift ('>>') are different. Arithmetic right shift (>>) is signed whereas unsigned right shift (>>>) is non-negative. The operations are performed on the first integer with a shift/rotate amount of the second integer:

```java
public class Main {
    public static void main(String[] args){
        int a = -460; 
        int b = 6;
        bitwise(a,b);
    }

    static void bitwise(int a, int b) {
        System.out.println("a:   " + Integer.toBinaryString(a));
        System.out.println("b:   " + Integer.toBinaryString(b));
        // Bitwise logical operations
        System.out.println("and: " + Integer.toBinaryString(a & b));
        System.out.println("or:  " + Integer.toBinaryString(a | b));
        System.out.println("xor: " + Integer.toBinaryString(a ^ b));
        System.out.println("not: " + Integer.toBinaryString(~a & 0xFFFF)); // XOR operation with ~0xFFFF for negative numbers

        if (b < 0) {
            System.err.println("Right operand is negative, but all shifts require an unsigned right operand (shift distance).");
            return;
        }

        int ua = a;
        int ub = b;

        // Logical shifts (unsigned left operand)
        System.out.println("shl: " + Integer.toBinaryString(ua <<=ub)); 
        // Arithmetic shifts (signed left operand)
        System.out.println("las: " + Integer.toBinaryString((int)(a >>=ub))); 
        System.out.println("ras: " + Integer.toBinaryString((int)(a >>>=ub)));

        // Rotations (left rotate and right rotate)
        System.out.println("rol: " + Integer.toBinaryString((a <<=ub)|Integer.getLowestBit(a >> ub))); 
        System.out.println("ror: " + Integer.toBinaryString((Integer.getLowestBit(a >> ub)| a >>>=ub)<<=ub)); 
    }
}
```
This Java code will perform the same operations as your Golang code on integer inputs. If you want to test it with other values, simply replace `-460` and `6` in the function `bitwise()` with different integers.
