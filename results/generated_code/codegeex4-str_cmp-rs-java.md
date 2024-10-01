Below is the equivalent Java code:

```java
public class Main {
  public static void main(String[] args) {
    String a = "abc";
    String b = new String("Bac");

    // Case sensitive comparison
    if (a.equals(b)) {
      System.out.println("The strings are equal");
    }
    if (!a.equals(b)) {
      System.out.println("The strings are not equal");
    }

    // Lexical comparison
    int comparisonResult = a.compareTo(b);
    if (comparisonResult < 0) {
      System.out.println("The first string is lexically before the second");
    } else if (comparisonResult > 0) {
      System.out.println("The first string is lexically after the second");
    }

    // Case insensitive comparison
    if (a.equalsIgnoreCase(b)) {
      System.out.println("Both strings are equal when ignoring case");
    }
  }
}
```
This code demonstrates how to compare two strings for equality and inequality, lexical ordering and the use of `equalsIgnoreCase()` method for case-insensitive comparisons in Java. It also shows that integer comparison result can be used to determine if one string is lexically before or after another string.

Java doesn't have a built-in way to handle numeric strings as numbers without treating them as strings (like Rust's `parse` function), but you can use the `Integer.parseInt()` method for this purpose, as long as the strings represent valid integers. Here's an example:

try {
  int numA = Integer.parseInt(a);
  int numB = Integer.parseInt(b);

  if (numA > numB) {
    System.out.println("The first number is greater");
  } else if (numA < numB) {
    System.out.println("The first number is smaller");
  }
} catch(NumberFormatException e) {
  System.out.println("One or more strings are not valid integers.");
}

This code also shows how to handle the case where one or more of the compared strings cannot be parsed as integers.
