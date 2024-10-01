Here is the equivalent Java code for your C++ code:

```java
import java.util.Arrays;
import java.util.List;

public class Main {

    public static void main(String[] args) {
        // Create a list of string variables
        List<String> myStrings = Arrays.asList("prepended to", "my string"));

        // Prepend the first string in the list with another string literal
        String prepended = String.join("", myStrings.get(0), myStrings.get(1)));

        // Print out the final result
        System.out.println(prepended);
    }

}
```

This Java code does exactly what your provided C++ code does, which is to create a list of string variables, then prepend the first string in the list with another string literal, and finally print out the final result.
