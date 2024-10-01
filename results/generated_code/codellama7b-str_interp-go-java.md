To convert the code from Go to Java, you can use string concatenation and placeholders to achieve the desired result. Here's an example of how you might do this:
```
package main;
import java.util.Scanner;
public class Main {
  public static void main(String[] args) {
    String str = "Mary had a %s lamb";
    String txt = "little";
    System.out.println(String.format(str, txt));
  }
}
```
In this example, we're using the `String.format()` method to perform string interpolation on the original string. The `%s` placeholder in the string is replaced by the value of the `txt` variable, which is "little". The resulting string is then printed to the console.
