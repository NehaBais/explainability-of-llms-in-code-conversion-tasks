Here's the equivalent Java code for the given Golang code snippet:
```java
package main;
import java.util.Scanner;
public class Main {
 public static void main(String[] args) {
 Scanner scanner = new Scanner(System.in);
 System.out.print("Enter a string: ");
 String str = scanner.nextLine();
 System.out.print("Enter a value to interpolate: ");
 String txt = scanner.nextLine();
 String out = String.format("%s had a %s lamb", str, txt);
 System.out.println(out);
 }
}
```
In this Java code, we first prompt the user to enter a string and a value to interpolate. We then use the `String.format()` method to perform string interpolation by replacing `%s` in the original string with the user-provided value. The resulting interpolated string is stored in the `out` variable and printed to the console using `System.out.println()`.

