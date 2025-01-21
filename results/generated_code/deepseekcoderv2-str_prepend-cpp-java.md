 Here's the equivalent Java code for the given C++ program:

```java
import java.util.ArrayList;
import java.util.List;
import java.util.stream.Collectors;

public class Main {
    public static void main(String[] args) {
        List<String> myStrings = new ArrayList<>();
        myStrings.add("prepended to");
        myStrings.add("my string");
        
        String prepended = myStrings.stream()
                                    .collect(Collectors.joining(" "));
        
        System.out.println(prepended);
    }
}
```

Explanation:
1. In Java, we use `ArrayList` instead of `std::vector`.
2. We create a list of strings (`myStrings`) and add the required strings to it.
3. We then use Java Streams to concatenate the elements in the list into a single string. This is similar to how you would use `std::accumulate` in C++.
4. Finally, we print the concatenated string using `System.out.println`.
