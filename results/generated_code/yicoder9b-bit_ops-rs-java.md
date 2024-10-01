Here is the equivalent Java code for your Rust program:

```java
public class Main {
    static int a = 105;
    static int b = 91;

    public static void main(String[] args) {
        System.out.println("a      = " + String.format("%8s", Integer.toBinaryString(a)).replace(' ', '0'));
        System.out.println("b      = " + String.format("%8s", Integer.toBinaryString(b)).replace(' ', '0'));
        System.out.println("a | b  = " + String.format("%8s", Integer.toBinaryString(a | b)).replace(' ', '0'));
        System.out.println("a & b  = " + String.format("%8s", Integer.toBinaryString(a & b)).replace(' ', '0'));
        System.out.println("a ^ b  = " + String.format("%8s", Integer.toBinaryString(a ^ b)).replace(' ', '0'));
        System.out.println("~a     = " + String.format("%8s", Integer.toBinaryString(~a)).replace(' ', '0'));
        System.out.println("a << 3 = " + String.format("%8s", Integer.toBinaryString(a << b)).replace(' ', '0'));
        System.out.println("a >> 3 = " + String.format("%8s", Integer.toBinaryString(a >> b)).replace(' ', '0'));
    }
}
```

Please note that in Java the size of integer is platform-dependent, and usually a 4 bytes (32 bits). The bitwise not operator (~) returns the one's complement which is equivalent to -(x+1) for any positive number x. Also note there are no unsigned integers in java, so if you want exactly same behavior as your original rust code where it treats `a` and `b` as u8 (8-bit unsigned integer) you may need to manually implement that or consider using a library.
