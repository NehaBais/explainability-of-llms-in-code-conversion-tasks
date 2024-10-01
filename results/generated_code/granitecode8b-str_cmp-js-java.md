Here is the converted code from JavaScript to Java:
```java
public class StringComparison {
 public static void main(String[] args) {
 boolean equalValue = "abcd".equals("abcd"); // true
 boolean equalTypeAndValue = "abcd".equals("abcd") && "abcd".getClass() == "abcd".getClass(); // true
 boolean notEqualValue = !"abcd".equals("abcd"); // false
 boolean notEqualTypeOrValue = !"abcd".equals(123); // true
 boolean lexicallyOrderedBefore = "abcd".compareTo("dcba") < 0; // true
 boolean lexicallyOrderedAfter = "abcd".compareTo("dcba") > 0; // false
 boolean caseInsensitiveEqual = "ABCD".compareToIgnoreCase("abcd") == 0; // true
 System.out.println(equalValue);
 System.out.println(equalTypeAndValue);
 System.out.println(notEqualValue);
 System.out.println(notEqualTypeOrValue);
 System.out.println(lexicallyOrderedBefore);
 System.out.println(lexicallyOrderedAfter);
 System.out.println(caseInsensitiveEqual);
 }
}
```
In Java, the `==` operator is used for value comparison and the `equals()` method is used for both value and type comparison. The `!=` and `<>` operators are used for inequality and ordering comparison, respectively. The `compareTo()` method is used to compare two strings lexically. The `compareToIgnoreCase()` method is used to perform a case-insensitive comparison of two strings.
In Java, the `String` class provides various methods for string comparison, such as `equals()`, `equalsIgnoreCase()`, `compareTo()`, and `compareToIgnoreCase()`. These methods can be used to compare strings in different ways, depending on the requirements of the application. For example, the `equals()` method can be used to compare two strings for exact equality, while the `compareTo()` method can be used to compare two strings lexically.

