In Java, the comparison operators for strings are:
- .equals() to check if two strings have identical characters in the exact sequence. This is case sensitive.
- .equalsIgnoreCase() to ignore case while comparing strings.
- .compareTo() to compare the lexicographical order of strings. It returns a negative integer, zero, or a positive integer when str1 is less than, equal to, or greater than str2 respectively.
Here's how you can convert it:
```java
public class Main {
    public static void main(String[] args) {
        System.out.println(
            "abcd".equals("abcd"), // true (exact equality - case sensitive)
            "abcd".equals("abcd"), // true (exact equality - case sensitive)
            123 == Integer.parseInt("123"), // true (numeric string comparison as integer)
            123 != Integer.parseInt("123"), // false (numeric string comparison as integer)
            "ABCD".equals("abcd"), // false (case sensitive equality check)
            "ABCD".equalsIgnoreCase("abcd"), // true (case insensitive equality check)
            !"abcd".equals("dcba"), // true (check for inequality - case sensitive)
            !"abcd".equals("dcba"), // false (check for inequality - case sensitive)
            "abcd".compareTo("dcba") < 0, // true (lexical order check where str1 is before str2)
            "abcd".compareTo("dcba") > 0, // false (lexical order check where str1 is after str2)
        );
    }
}
```
