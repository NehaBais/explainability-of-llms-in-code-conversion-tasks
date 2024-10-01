 Here is the Java code that should accomplish the same task as the C++ code:
```
import java.util.*;

public class Main {
    public static void main(String[] args) {
        List<String> myStrings = Arrays.asList("prepended to", "my string");
        String prepended = myStrings.stream().collect(Collectors.joining());
        System.out.println(prepended);
    }
}
```
This code uses the `java.util.stream` package to create a stream of strings from the list of strings, and then uses the `Collectors.joining()` method to concatenate all the strings in the stream into a single string. The resulting string is then printed to the console using the `System.out.println()` method.
Note that this code assumes that you have already included the necessary imports for the classes used, such as `java.util.List` and `java.io.PrintStream`.
