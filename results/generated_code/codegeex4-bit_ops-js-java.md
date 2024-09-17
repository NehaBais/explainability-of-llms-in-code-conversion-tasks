In Java, the bitwise operations are similar to JavaScript. The conversion of given JavaScript code to Java is as follows:

```java
public class Main {
    public static void main(String[] args) {
        int a = 10;
        int b = 2;
        bitwise(a, b);
    }

    static void bitwise(int a, int b){
        System.out.println("a AND b: " + (a & b));
        System.out.println("a OR b: "+ (a | b));
        System.out.println("a XOR b: "+ (a ^ b));
        System.out.println("NOT a: " + ~a);
        System.out.println("a << b: " + (a << b)); // left shift
        System.out.println("a >> b: " + (a >> b)); // arithmetic right shift
        System.out.println("a >>> b: " + (a >>> b)); // logical right shift
    }
}
```
This code first initializes two integers, `a` and `b`, before calling the `bitwise` method. The `bitwise` function performs the same operations as the original JavaScript code.

Note that you can replace 10 for `a` and 2 for `b` with any values you want to test.
