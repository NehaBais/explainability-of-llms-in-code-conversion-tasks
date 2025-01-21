 Sure, here is the equivalent code in Java:

```java
public class Main {
    public static void main(String[] args) {
        String s = "hello".intern(); // Use intern() to ensure the string is stored in the pool
        System.out.println(s);
        
        String s1 = s + " world";
        System.out.println(s1);
    }
}
```

In this Java code:
- We create a `String` variable `s` initialized with the string `"hello"`. The `intern()` method is used to ensure that the string is stored in the pool, which helps in efficient memory usage.
- We print the content of `s`.
- We concatenate `" world"` to `s` and store the result in `s1`.
- We print the content of `s1`.
