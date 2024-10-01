Sure! Here's the Java code that achieves the same output as the C++ code:
```java
import java.util.Scanner;

public class SubstringExample {
 public static void main(String[] args) {
  Scanner input = new Scanner(System.in);
  
  // Get user input for string, starting index, and length of substring
  System.out.print("Enter a string: ");
  String str = input.nextLine();
  System.out.print("Enter the starting index: ");
  int start = input.nextInt();
  System.out.print("Enter the length of the substring: ");
  int length = input.nextInt();
  
  // Display the substring
  System.out.println(str.substring(start, start + length));
 }
}
```
This Java program prompts the user to enter a string, starting index, and length of substring, then displays the substring using the `substring()` method. 
Note that this Java program assumes that the input will always be valid and does not handle any encoding issues or non-Unicode characters. If you need to handle these cases, you may need to use additional libraries or techniques.

