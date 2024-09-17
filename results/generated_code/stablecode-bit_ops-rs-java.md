Below is the equivalent Java code for performing bitwise AND, OR, and XOR operations on two integers.

```java
public class Main {
    public static void main(String[] args) {
        int a = 105;
        int b = 91;

        System.out.printf("a      = %8d%n", a);
        System.out.printf("b      = %8d%n", b);
        System.out.printf("a | b  = %8d%n", a | b);
        System.out.printf("a & b  = %8d%n", a & b);
        System.out.printf("a ^ b  = %8d%n", a ^ b);
        System.out.printf("!a     = %8d%n", !a);
        System.out.printf("a << 3  = %8d%n", a << 3);
        System.out.printf("a >> 3  = %8d%n", a >> 3);
    }
}
```
In this Java code, it performs all the required operations on two integers 'a' and 'b'. The '%8d' format specifier is used to print the numbers in decimal format with a minimum field width of 8.
