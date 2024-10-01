Here is the equivalent Java code:

```java
public class Main {
    public static void main(String[] args) {
        String s = new String("hello");
        System.out.println(s);

        String s1 = s + " world";
        System.out.println(s1);
    }
}
```

Explanation: 
In Java, strings are immutable objects. Therefore, to concatenate two Strings in Java, we need to create a new String object that is the result of merging the two original strings. The `+` operator does not work for Strings in Java; instead, it uses the `StringBuilder` or `StringBuffer` class. However, since we are using the standard output `System.out.println()`, it can handle concatenating Strings using the `+` operator without creating a new String object like Rust.
