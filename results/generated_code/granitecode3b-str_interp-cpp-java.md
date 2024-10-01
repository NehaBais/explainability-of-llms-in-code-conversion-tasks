Here's the Java code that performs string interpolation using the `replace()` method:
```java
public class Main {
 public static void main(String[] args) {
 String original = "Mary had a X lamb.";
 String toBeReplaced = "X";
 String replacement = "little";
 
 String newString = original.replace(toBeReplaced, replacement);
 
 System.out.println("String after replacement: " + newString);
 }
}
```
This code creates three variables: `original`, `toBeReplaced`, and `replacement`. The `original` variable contains the original string that needs to be interpolated. The `toBeReplaced` variable contains the character sequence in the original string that needs to be replaced. The `replacement` variable contains the value that will replace the character sequence in the original string.
The `replace()` method is then used on the `original` string to perform the interpolation. The first argument of the `replace()` method is the character sequence to be replaced, and the second argument is the replacement value. In this case, the character sequence `"X"` is replaced with the value `"little"`.
The resulting interpolated string is stored in the `newString` variable, which is then printed to the console using the `println()` method.

