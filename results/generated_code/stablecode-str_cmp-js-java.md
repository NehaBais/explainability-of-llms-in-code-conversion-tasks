Below is the equivalent Java code for comparing two strings:

```java
public class StringComparisonDemo {
    public static void main(String[] args) {

        System.out.println("abcd" == "abcd")); // true
        System.out.println("abcd" === "abcd")); // false (Java is strictly typed)
        System.out.println(123 == "123")); // true
        System.out.println(123 === "123")); // false (Java is not strictly typed)
        System.out.println("ABCD".toLowerCase()) == ("abcd".toLowerCase())); // true (case insensitive comparison)
    }
}
```
This Java code demonstrates how to compare two strings, including both exact equality and inequality comparisons. It also showcases lexical ordering of the strings using less than (`<`), greater than (`>`) operators. Additionally, it illustrates case sensitive comparison using `==` operator, while case insensitive comparison is accomplished by converting both strings to lowercase before performing the comparison.
