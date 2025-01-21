Here is how you can convert the given Rust code to Java:
```java
public class Main {
    public static void main(String[] args) {
        String a = "abc";
        String b = "Bac";

        // Strings are compared by their content (lexicographically)
        if(a.equals(b))
            System.out.println("The strings are equal");
        else
            System.out.println("The strings are not equal");

        // We use compareTo() method for lexicographical comparison of two strings
        int result = a.compareTo(b);

        if(result > 0) 
            System.out.println("The first string is lexically after the second");
        else if(result < 0)
            System.out.println("The first string is lexically before the second");

        // For case-insensitive comparison, we convert strings to lower-case or upper-case first
        a = a.toLowerCase();
        b = b.toLowerCase();

        // repeat checks
    }
}
```
Note that in Java, you can compare `String` objects using both `equals()` and `==`. The `equals()` method compares the content of two strings, while `==` compares whether they're pointing to the same location in memory. You should always use `equals()` for comparing the content of `String` objects.

In Java, `compareTo()` is a built-in method that can be used for lexicographical comparison of two `String` objects. It returns a negative integer if the current string is lexicographically before the specified string, zero if they are equal, and positive if it's after.

Finally, for case-insensitive comparisons in Java, you can use either `toLowerCase()` or `toUpperCase()` methods on strings to convert them to lower-case or upper-case, respectively.
