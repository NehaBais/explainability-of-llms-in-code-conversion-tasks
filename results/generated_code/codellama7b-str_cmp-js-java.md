Sure, I can help you with that! Here's the conversion of the JavaScript code to Java:
```
public class Main {
  public static void main(String[] args) {
    System.out.println("abcd" == "abcd"); // true
    System.out.println("abcd" === "abcd"); // true
    System.out.println(123 == "123"); // true
    System.out.println(123 === "123"); // false
    System.out.println("ABCD" == "abcd"); // false
    System.out.println("ABCD" != "abcd"); // true
    System.out.println(123 != "123"); // false
    System.out.println(123 !== "123"); // true
    System.out.println("abcd".compareTo("dcba") == 1); // true
    System.out.println("abcd".compareTo("dcba") > 0); // false
    System.out.println("ABCD".toLowerCase().equalsIgnoreCase("abcd")); // true (case insensitive)
  }
}
```
In Java, we can use the `String` class's `compareTo()` method to compare two strings lexically, and we can also use the `String` class's `equalsIgnoreCase()` method to compare two strings case-insensitively.

Note that in Java, the `==` operator is used for reference equality, which means it checks whether two variables refer to the same object in memory. The `===` operator is used for value equality, which means it checks whether two variables have the same value regardless of their memory location. In this case, we are using the `==` operator to compare two strings for exact equality.

Similarly, we can use the `!=` operator for not-equal and the `===` operator for equal-and-not-null. The `<`, `>`, `<=`, and `>=` operators are used for comparing strings lexically, and the `equalsIgnoreCase()` method is used to compare strings case-insensitively.

It's worth noting that in Java, the `==` operator only works for objects of the same class, so if we have two different classes that both contain a `String` field, we cannot use the `==` operator to compare them. Instead, we would need to use the `equals()` method to compare them for equality.
