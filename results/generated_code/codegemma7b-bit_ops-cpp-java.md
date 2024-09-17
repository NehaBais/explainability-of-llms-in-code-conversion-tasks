```java
public class BitwiseOperations {

    public static void bitwise(int a, int b) {
        System.out.println("a and b: " + (a & b));
        System.out.println("a or b: " + (a | b));
        System.out.println("a xor b: " + (a ^ b));
        System.out.println("not a: " + ~a);

        System.out.println("a shl b: " + (a << b));
        System.out.println("a shr b: " + (a >> b));
        System.out.println("a lsr b: " + (a >>> b));

        int ua = a;
        System.out.println("a rol b: " + Integer.rotateLeft(ua, b));
        System.out.println("a ror b: " + Integer.rotateRight(ua, b));
    }
}
```

**Explanation:**

* The `bitwise()` method takes two integers as input.
* It performs the following bitwise operations:
    * AND (&)
    * OR (|)
    * XOR (^)
    * NOT (~)
    * Left shift (<<)
    * Right shift (>)
    * Right arithmetic shift (>>>)
    * Left rotate (Integer.rotateLeft())
    * Right rotate (Integer.rotateRight())
* The results of each operation are printed to the console.

**Usage:**

```java
BitwiseOperations.bitwise(5, 2);
```
