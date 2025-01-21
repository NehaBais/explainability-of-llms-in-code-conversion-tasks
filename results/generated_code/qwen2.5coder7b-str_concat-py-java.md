Here is the Java equivalent of your Python code:

```java
public class Main {
    public static void main(String[] args) {
        String s1 = "hello";
        System.out.println(s1 + " world");

        String s2 = s1 + " world";
        System.out.println(s2);

        s1 = "hello";
        System.out.println(String.join(", ", s1, "world", "mom"));

        s2 = String.join(", ", s1, "world", "mom");
        System.out.println(s2);
    }
}
```

In Java you need to use the `System.out.println()` method to print something on the console. Also, in Java strings are concatenated using '+'. Moreover, for joining multiple strings with a specific delimiter, Java provides `String.join()` method which is equivalent to Python's `join()`.
