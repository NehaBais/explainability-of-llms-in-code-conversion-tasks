Here is the converted code from C++ to Java:
```java
import java.util.Scanner;
 
public class StringInterpolation {
 
 public static void main(String[] args) {
 Scanner scanner = new Scanner(System.in);
 System.out.print("Enter the original string: ");
 String original = scanner.nextLine();
 System.out.print("Enter the character sequence to be replaced: ");
 String toBeReplaced = scanner.next();
 System.out.print("Enter the value to replace the character sequence with: ");
 String replacement = scanner.next();
 
 String newString = original.replace(toBeReplaced, replacement);
 System.out.println("String after replacement: " + newString);
 }
 
}
```
This Java code prompts the user to enter the original string, the character sequence to be replaced, and the value to replace it with. It then uses the `replace` method of the `String` class to replace the character sequence in the original string with the specified value, and prints the resulting string. This is similar to the C++ code you provided, except that it uses Java's built-in input/output classes instead of C++'s `std::cin` and `std::cout`.

