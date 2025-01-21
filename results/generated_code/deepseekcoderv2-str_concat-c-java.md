 Here's the equivalent Java code for the provided C code:

```java
public class StringConcatenation {
    public static void main(String[] args) {
        String s = "hello";
        String s2;

        System.out.println(s + " literal");
        
        // Using a method to concatenate strings (optional, for demonstration purposes)
        s2 = concatWithMethod(s, " literal");
        System.out.println(s2);
    }

    public static String concatWithMethod(String str1, String str2) {
        return str1 + str2;
    }
}
```

In this Java code:
- We declare a `String` variable `s` initialized with "hello".
- We print the string concatenated with " literal" using string concatenation.
- We demonstrate how to concatenate strings using a method `concatWithMethod`, which takes two strings as arguments and returns their concatenation.
