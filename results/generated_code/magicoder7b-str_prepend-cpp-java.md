 The equivalent Java code for the given C++ code would be as follows:

```java
import java.util.*;

public class Main {
    public static void main(String[] args) {
        List<String> myStrings = Arrays.asList("prepended to", "my string");
        String prepended = myStrings.stream()
            .reduce((a, b) -> a + b).orElse("");
        System.out.println(prepended);
    }
}
```
In this Java code:
- We first import the necessary libraries.
- In the main method, we create a list of strings that contains our prepend strings.
- We use Java 8 Stream API to concatenate all elements in myStrings into one string by using reduce function with binary operator function (a, b) -> a + b. The orElse ""); part handles the case when the list is empty and will print an empty string as the result.
- We then print out the resulting string to the console.
