Here is the converted code from C++ to Java:
```
import java.util.*;
public class Main {
 public static void main(String[] args) {
 List myStrings = Arrays.asList("prepended to", "my string");
 String prepended = String.join("", myStrings);
 System.out.println(prepended);
 }
}
``` 
In this converted code, we first import the necessary Java classes: `java.util.Arrays` and `java.util.List`. Then, we create a list of strings called `myStrings` with the values "prepended to" and "my string". We use the `String.join()` method to concatenate all the strings in the list into a single string, which is stored in the `prepended` variable. Finally, we print out the `prepended` string using `System.out.println()`.

