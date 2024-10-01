Here is the equivalent Java code:

```java
public class Main {
    public static void main(String[] args) {
        System.out.println(
            "abcd".equals("abcd"), // true
            "abcd".equals("abcd"), // true
            123 == Integer.parseInt("123"), // true
            "123".compareTo("123") == 0, // true
            "ABCD".toLowerCase().equals("abcd".toLowerCase()), // true (case insensitive)
            ! "abcd".equals("dcba"), // false
            123 != Integer.parseInt("123"), // false
            123 != Integer.parseInt("123"), // false
            "abcd".compareTo("dcba") < 0, // true
            "abcd".compareTo("dcba") > 0); // false
    }
}
```

Java uses the `equals()` method to compare two objects for equality. It checks if the content of the objects is the same. `compareTo()` is a method in String class that is used to compare two Strings lexicographically. It returns an integer value indicating the result of the comparison: 
- If the value is less than zero, then this string is lexicographically smaller than the string argument
- If the value is positive, then this string is lexicographically greater than the string argument
- If the value is zero, then both strings are equal.
