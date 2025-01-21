The error occurred because `System.out.println()` does not support format specifiers like `%s`. The correct method to use is `System.out.printf()`, which supports these format specifiers.

Here's the corrected code:

```java
public class Main {
  public static void main(String[] args) {
    System.out.printf("Mary had a %s lamb%n", "little");
    System.out.printf("%2$s had a %1$s lamb%n", "little", "Mary");
    System.out.printf("name=%s, adj=%s -> %s had a %s lamb%n", "Mary", "little", "Mary", "little");
  }
}
```
