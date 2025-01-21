
Error: The compiler is not allowing implicitly declared classes, which are currently in preview mode.
Fix: Enable implicitly declared classes by using the `--enable-preview` flag when compiling the code.
Corrected code:
```java
public static void main(String[] args) {
    System.out.println("Mary had a " + String.format("%s lamb", "little"));
    // You can specify order
    System.out.println(String.format("%s had a %s lamb", "Mary", "little"));
    // Or named arguments if you prefer
    System.out.println(String.format("{name} had a {adj} lamb", "Mary", "little"));
}
```
