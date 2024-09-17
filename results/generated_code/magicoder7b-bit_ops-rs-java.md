 Here is the Java equivalent of your Rust code:

```java
public class Main {
    public static void main(String[] args) {
        int a = 105;
        int b = 91;
        System.out.printf("a      = %08d%n", a);
        System.out.printf("b      = %08d%n", b);
        System.out.printf("a | b  = %08d%n", a | b);
        System.out.printf("a & b  = %08d%n", a & b);
        System.out.printf("a ^ b  = %08d%n", a ^ b);
        System.out.printf("!a     = %08d%n", ~a);
        System.out.printf("a << 3 = %08d%n", a << 3);
        System.out.printf("a >> 3 = %08d%n", a >> 3);
    }
}
```
In the Java version, there are some differences:
- The type `u8` in Rust is replaced by `int` in Java because Java does not have unsigned integers.
- Bitwise operations are performed directly with operators like `|`, `&`, `^`.
- The bitwise NOT operator (which is `!` in Rust) becomes `~` in Java. 
- For left and right shift, the syntax remains the same, i.e., `<<` for a left shift and `>>` for a right one.
- In order to print the binary representation of an integer in Java, you can use `%08d`, where `08` stands for padding zeros up to 8 digits if necessary.
