```
import java.util.Scanner;

public class Interpolation {
    public static void main(String[] args) {
        String original = "Mary had a X lamb.";
        String extra = "little";
        System.out.printf("Mary had a %s lamb.", extra);
    }
}
```
This code uses the `printf` method to perform string interpolation in Java. The `%s` specifier is used to indicate that the next argument should be treated as a string, and it will be inserted into the original string at the position of the first occurrence of `X`.
