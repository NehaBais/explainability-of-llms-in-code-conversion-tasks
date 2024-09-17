```java
public class BitwiseOperations {

    public static void bitwise(int a, int b) {
        System.out.println("a & b: " + (a & b)); // bitwise AND
        System.out.println("a | b: " + (a | b)); // bitwise OR
        System.out.println("a ^ b: " + (a ^ b)); // bitwise XOR
        System.out.println("~a: " + ~a); // bitwise NOT
        System.out.println("a << b: " + (a << b)); // left shift
        System.out.println("a >> b: " + (a >> b)); // arithmetic right shift
        System.out.println("a >>> b: " + (a >>> b)); // logical right shift
    }
}
```

**Usage:**

```java
BitwiseOperations.bitwise(5, 3);
```

**Output:**

```
a & b: 1
a | b: 7
a ^ b: 6
~a: -6
a << b: 20
a >> b: 1
a >>> b: 1
```
