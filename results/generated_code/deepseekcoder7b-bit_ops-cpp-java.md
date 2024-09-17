In Java there is no built-in support for bitwise rotates in the standard library. However, you can achieve this using `>>` (logical shift right), `<<` (left shift) and bit manipulation techniques to implement left rotation and right rotation functions yourself. Here is your translated code into java:

```java
public class Main {
    public static void main(String[] args) {
        int a = 10; // for example values
        int b = 2;  // for example values
        bitwise(a, b);
    }
    
    public static void bitwise(int a, int b) {
        System.out.println("a and b: " + (a & b));  
        System.out.println("a or b:  " + (a | b)); 
        System.out.println("a xor b: " + (a ^ b));
        
        // Java uses 2's complement to represent negative numbers, so we use ~a & 0x7fffffff for bitwise NOT and logical right shift operation
        System.out.println("not a:   " + (~a & 0x7FFFFFFF));   
        
        // Note: the Java shift operators are not guaranteed to work if the shift count (that is, b)
        // is negative, or is greater or equal to the number of bits in the integer being shifted.
        System.out.println("a shl b: " + (a << b)); 
        System.out.println("a shr b: " + (a >> b));  
        
        // for logical right shift on positive numbers, Java uses arithmetic shift >>>
        int ua = a;
        System.out.println("a lsr b: " + (ua >>> b)); 
        
        System.out.println("a rol b: " + rotateLeft(a,b)); // rotates left manually implemented
        System.out.println("a ror b: " + rotateRight(a,b)); // rotates right manually implemented
    }
    
    public static int rotateLeft(int a, int b) {  
        return (a << b) | (a >>> (32 - b)); 
    }
        
    public static int rotateRight(int a, int b) {
        return (a >> b) | (a << 32 - b);
    }    
}
```
In the code above, we first print out the bitwise operations like in C++. For not operation, as Java uses 2's complement to represent negative numbers, so we use `~a & 0x7fffffff` for getting logical NOT of a number. Left rotation and right rotation are manually implemented using bit manipulation techniques. In both rotations, we shift left by b bits or rotate right by b bits respectively, depending on whether the integer is positive or negative.

