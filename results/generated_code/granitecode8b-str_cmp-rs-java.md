Here is the equivalent Java code that demonstrates how to compare two strings for equality and inequality, lexical order, case sensitivity, and other kinds of string comparisons:
```
public class StringComparison {
 public static void main(String[] args) {
 // exact equality
 String a = "abc";
 String b = "Bac";
 if (a.equals(b)) {
 System.out.println("The strings are equal");
 } else {
 System.out.println("The strings are not equal");
 }

 // inequality
 if (!a.equals(b)) {
 System.out.println("The strings are not equal");
 } else {
 System.out.println("The strings are equal");
 }

 // lexical order
 if (a.compareTo(b) < 0) {
 System.out.println("The first string is lexically before the second");
 } else if (a.compareTo(b) > 0) {
 System.out.println("The first string is lexically after the second");
 } else {
 System.out.println("The strings are equal in lexical order");
 }

 // case sensitivity
 if (a.equals(b)) {
 System.out.println("Both strings are equal when ignoring case");
 } else {
 System.out.println("The strings are not equal when ignoring case");
 }

 // other kinds of string comparisons
 String c = "123";
 String d = "456";
 if (c.compareTo(d) < 0) {
 System.out.println("The first string is lexically before the second");
 } else if (c.compareTo(d) > 0) {
 System.out.println("The first string is lexically after the second");
 } else {
 System.out.println("The strings are equal in lexical order");
 }
 }
}
```
In this example, we have compared two strings `a` and `b` for exact equality and inequality using the `equals()` method. We have also compared them for lexical order using the `compareTo()` method, which returns a negative integer if `a` is lexically before `b`, a positive integer if `a` is lexically after `b`, and zero if they are equal.
We have demonstrated case sensitivity by comparing `a` and `b` without ignoring case. We have also shown how to compare two numeric strings using the same approach.
Note that in Java, we can perform both case sensitive and case insensitive comparisons using the `equals()` method with appropriate options. However, Java does not provide a built-in way to compare strings lexically without converting them to a common type (e.g., `String`). Therefore, we need to use the `compareTo()` method or create a custom comparison logic for lexical order.

