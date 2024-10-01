Here's the equivalent Java code for the given Golang code:
```java
package main;
import java.util.*;
public class Main {
 public static void main(String[] args) {
 String str = "Mary had a %s lamb";
 String txt = "little";
 System.out.println(String.format(str, txt));
 }
}
```
The `String.format()` method in Java is used for string interpolation. It replaces the `%s` placeholder with the value of the `txt` variable and returns the interpolated string. The result is then printed to the console using `System.out.println()`.

