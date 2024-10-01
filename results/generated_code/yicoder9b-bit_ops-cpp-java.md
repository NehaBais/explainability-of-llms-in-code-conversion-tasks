Here is the equivalent Java code for your C++ function. Java does not have a built-in rotate function as of JDK 8 and previous versions, so the rotl() and rotr() functions are implemented manually:

```java
public class Main {
    public static void main(String[] args) {
        bitwise(5, 2);  // Sample values. Replace with your own values.
    }

    static void bitwise(int a, int b) {
        System.out.println("a and b: " + (a & b));
        System.out.println("a or b:  " + (a | b));
        System.out.println("a xor b: " + (a ^ b));
        System.out.println("not a:   " + ~a); 
        // Note: the Java shift operators are not guaranteed to work if the shift count is negative or >= number of bits in integer
        System.out.println("a shl b: " + (a << b));
        System.out.println("a shr b: " + (a >> b)); // typically arithmetic right shift, but not guaranteed
        int ua = a;
        System.out.println("a lsr b: " + (ua >>> b));  // logical right shift (guaranteed)
      
        // there are no rotation operators in Java, so we implement them manually as follows: 
        System.out.println("a rol b: " + rotl(ua, b));
        System.out.println("a ror b: " + rotr(ua, b));  
    }

    static int rotl(int a, int b) { 
        return (a << b) | (a >>> -b);
    }

    static int rotr(int a, int b){
       return (a >>> b) | (a << -b);
   }
}
```
Please note that the rotate functions rotl() and rotr() have been implemented assuming a 32-bit integer. For a different number of bits, you'd need to adjust how many places are rotated by using the modulus operator with the number of bits in the integer type. The Java >>> operator performs a logical right shift which fills in from the left with zeros, similar to what a right rotate does on an unsigned integer.
