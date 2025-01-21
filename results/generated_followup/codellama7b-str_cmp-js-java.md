
Error: The `===` operator is not supported in Java, instead use `equals()` method to compare two strings for equality.
Fix: Replace `=== "abcd"` with `equals("abcd")`.
Corrected code:
```java
public class Main {
  public static void main(String[] args) {
    System.out.println("abcd".equals("abcd")); // true
    System.out.println(123 == "123"); // true
    System.out.println(123 !== "123"); // false
  }
}
```
