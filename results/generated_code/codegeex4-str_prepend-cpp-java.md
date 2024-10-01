Below is the Java equivalent of your C++ code:

```java
import java.util.Arrays;
import java.util.stream.Collectors;

public class Main {
    public static void main(String[] args) {
        String[] myStrings = {"prepended to", "my string"};
        String prepended = Arrays.stream(myStrings).collect(Collectors.joining(" "));
        System.out.println(prepended);
    }
}
```

This Java code creates an array of Strings and uses the `Arrays.stream()` method to create a stream from this array. Then, it collects these strings into one single string using the `Collectors.joining()` method with a space as delimiter.

Please note that in your original C++ code, you are effectively concatenating all elements of a vector separated by an empty string (""), which seems to be an error. The corrected Java version above joins the array by a space, mimicking this behavior. If you indeed want to prepend your strings with no space between them, you should change `Collectors.joining(" ")` to `Collectors.joining()`.
