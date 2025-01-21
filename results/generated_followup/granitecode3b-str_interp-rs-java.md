The error occurs because the `println` method in Java expects at least two arguments, but the given code snippet passes three arguments to it when calling the `println` method. The correct way to pass multiple arguments to the `println` method is by enclosing them within parentheses and separating them with commas.
Fix: Replace `{1} had a {0} lamb`, `"little"`, `"Mary"` with `{0} had a {1} lamb`.
Rewritten code:
```java
public class StringInterpolationExample {
  public static void main(String[] args) {
    System.out.println("Mary had a " + "little" + " lamb");
    System.out.println("{0} had a {1} lamb", "Mary", "little");
    System.out.println("{name} had a {adj} lamb", "Mary", "little", "adj");
  }
}
``` 
Explanation: The error occurs because the `println` method in Java expects at least two arguments, but the given code snippet passes three arguments to it when calling the `println` method. The correct way to pass multiple arguments to the `println` method is by enclosing them within parentheses and separating them with commas. In the corrected code, we have replaced `{1} had a {0} lamb`, `"little"`, `"Mary"` with `{0} had a {1} lamb`. This will print the output "Mary had a little lamb" to the console.

