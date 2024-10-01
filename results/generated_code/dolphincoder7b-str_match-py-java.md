Below is the Java equivalent of your Python code:

```java
public class Main {
    public static void main(String[] args) {
        System.out.println("abcd".startsWith("ab")); // returns True
        System.out.println("abcd".endsWith("zn")); // returns False
        System.out.println("abab".contains("bb"));  // returns False
        System.out.println("abab".contains("ab"));   // returns True

        int loc = "abab".indexOf("bb");    // returns -1
        loc = "abab".indexOf("ab");      // returns 0
        loc = "abab".indexOf("ab",loc+1); // returns 2
    }
}
```

In Java, the `startsWith()` method of a string returns true if and only if the argument string is at the beginning of this string. The `endsWith()` method similarly checks if this string ends with the specified prefix.
The `contains()` method tests whether some portion of this string matches with the given argument string. It is equivalent to `indexOf(String, int)` > -1. 

`indexOf(String)` returns the index within this string where the given substring begins, or -1 if the substring is not found. The second form of indexOf(String) allows you to specify a starting position from which to search for the given substring. If this starting point is greater than or equal to the length of the string, -1 will be returned.

The `find()` method in Python has no equivalent in Java because it returns the index at which the first occurrence of the substring is found. In Java, you can use `indexOf()`. However, it's important to note that while in Python a match anywhere in the string will return a positive value, in Java `indexOf()` only finds the first occurrence and returns -1 if there is no match. If you want to find all occurrences of a substring, you would need to use a different method or library, such as Apache Commons Lang's `StrinUtils`. The implementation of `find()` function can be similarly achieved in Java with `indexOf()`. 

You can read more about these methods and their usages in the official Oracle Java Documentation:
- [String.startsWith()](https://docs.oracle.com/javase/8/docs/api/java/lang/String.html#startsWith-int-)
- [String.endsWith()](https://docs.oracle.com/javase/8/docs/api/java/lang/String.html#endsWith-int-)
- [String.contains()](https://docs.oracle.com/javase/8/docs/api/java/lang/String.html#contains-java.lang.CharSequence-)
- [String.indexOf()](https://docs.oracle.com/javase/8/docs/api/java/lang/String.html#indexOf-int-)
