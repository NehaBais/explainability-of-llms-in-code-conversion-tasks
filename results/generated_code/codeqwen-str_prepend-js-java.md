Here is the equivalent Java code:

```java
public class Main {
    public static void main(String[] args) {
        // No built-in prepend
        String s=", World";
        s = "Hello" + s;
        System.out.println(s);
    }
}
```

In Java, string concatenation is performed using the `+` operator. This operator does not modify the original strings but creates a new string that combines the two operands. The result is assigned to the variable `s`. Then it prints the value of `s` to the console.
