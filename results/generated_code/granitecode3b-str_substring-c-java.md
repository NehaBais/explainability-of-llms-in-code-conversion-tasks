Sure! Here's the Java code that performs the same tasks as the C code:
```java
import java.util.Scanner;
 
public class SubstringExample {
 public static void main(String[] args) {
 Scanner scanner = new Scanner(System.in);
 
 String s = scanner.nextLine();
 int n = scanner.nextInt();
 int m = scanner.nextInt();
 
 String result = substring(s, n, m);
 System.out.println(result);
 }
 
 public static String substring(String s, int n, int m) {
 if (n < 0 || m < 0) {
 return null;
 }
 
 if (n + m > s.length()) {
 return null;
 }
 
 String result = "";
 for (int i = 0; i < m; i++) {
 result += s.charAt(n+i);
 }
 
 return result;
 }
}
```
The `substring` method takes three parameters: the string to be subscripted (`s`), the starting position of the substring (`n`), and the length of the substring (`m`). The method returns a new string that is a substring of `s`, starting from position `n` with a length of `m`.
The `main` method prompts the user to input a string, followed by two integer values for `n` and `m`. It then calls the `substring` method to get the desired substring, and prints it to the console.
Note that this code assumes that the input strings are valid and do not contain any null characters or other invalid values. If you need to handle these cases, you can add additional validation logic in the `substring` method.

