Here is how you can convert the JavaScript code to Java:

```java
public class Main {
    public static void main(String[] args) {
        System.out.println(
            "abcd".equals("abcd"), // true
            "abcd" == "abcd", // true
            Integer.valueOf(123).equals(Integer.valueOf("123")), // true
            123 != Integer.parseInt("123"), // false (using parseInt)
            !("ABCD".equals("abcd")), // true
            "abcd".compareTo("dcba") < 0, // true
            "abcd".compareTo("dcba") > 0, // false
            "ABCD".equalsIgnoreCase("abcd"), // true (case insensitive)
        );
    }
}
```

A few points to note:

1. In Java, string comparison is not done using the `==` operator like in JavaScript.
2. Java doesn't provide a direct equivalent for `===`. To check if two values are exactly same, you can use equals() method of Object class which String class overrides.
3. For non-String types, == checks if both operands point to the exact same object whereas .equals() checks if objects have same value.
4. The `.compareTo()` method in Java is used for lexicographical comparison. It returns a negative integer, zero, or a positive integer as this string is less than, equal to, or greater than the specified object.
5. `equalsIgnoreCase` is provided by String class to perform case insensitive comparison.
