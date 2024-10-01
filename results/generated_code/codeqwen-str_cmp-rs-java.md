The following is the equivalent Java code for the Rust code given:
```java
public class Main {
    public static void main(String[] args) {
        // only same types can be compared
        // String and String or String literal (String) and String object (String str = "string")
        // exception: strict equality and inequality also work on String literals and String objects
        String A = "abc";
        String b = new String("Bac");

        // Strings are coerced to String when needed
        if (A.equals(b)) {
            System.out.println("The strings are equal");
        }
        if (!A.equals(b)) {
            System.out.println("The strings are not equal");
        }
        if (A.compareTo(b) > 0) {
            System.out.println("The first string is lexically after the second");
        }
        if (A.compareTo(b) < 0) {
            System.out.println("The first string is lexically before the second");
        }
        if (A.compareTo(b) >= 0) {
            System.out.println("The first string is not lexically before the second");
        }
        if (A.compareTo(b) <= 0) {
            System.out.println("The first string is not lexically after the second");
        }

        // case-insensitives:

        // equality
        String A2 = A.toUpperCase();
        String b2 = b.toUpperCase();

        if (A2.equals(b2)) {
            System.out.println("Both strings are equal when ignoring case");
        }
    }
}
```
Note that Java does not support direct comparison between different types, so we have to convert String literal to a new object of type String using "new" keyword before comparing it with the other string.

The ".equals()" method is used for comparing two strings for equality. It compares values at corresponding index positions and returns true if all the elements are equal.
We can also use the "compareTo()" method, which returns a negative integer, zero, or a positive integer when the first string is less than, equals to, or greater than the second string in lexical order.

For case-insensitive comparison, we have to convert both strings to upper case using ".toUpperCase()" method before comparing them. 

Also note that Java's type system doesn’t allow comparisons between incompatible types. So you cannot directly compare two integers or floats with each other. You would need to cast one of the variables to another for comparison, which can lead to unexpected results and errors if not handled properly.
