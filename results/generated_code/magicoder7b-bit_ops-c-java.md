 Below is the equivalent Java code for the given C function. We use methods of Integer class to perform bitwise AND, OR and XOR operations and left and right shift operations. For the NOT operation we can use ~ operator provided by Java which performs two's complement.

```Java
public class Main {
    public static void main(String[] args) {
        int a = 15; // for example, you could input your own values here
        int b = 3;  // for example, you could input your own values here
        
        bitwiseOperations(a, b);
    }
    
    public static void bitwiseOperations(int a, int b) {
        System.out.println("Bitwise AND: " + (a & b));
        System.out.println("Bitwise OR: " + (a | b));
        System.out.println("Bitwise XOR: " + (a ^ b));
        System.out.println("Bitwise NOT: " + ~a); // Note that Java doesn't support bitwise NOT of negative integers, so for example it will return -16 instead of -15 if input was 15.
        
        int shiftedA = a << b; // left shift
        System.out.println("Left shift: " + shiftedA);
        
        shiftedA = a >> b; // right shift
        System.out.println("Right shift: " + shiftedA);
        
        int unsignedA = (a & 0xFFFFFFFF); // converting to unsigned
        shiftedA = unsignedA >> b; // logical right shift
        System.out.println("Logical Right Shift: " + shiftedA);
    }
}
```
