```java
import java.util.*;
public class Main {
    public static void main(String[] args){
        List<String> myStrings = Arrays.asList("prepended to", "my string");
        String prepended = "";
        for (String str : myStrings) {
            prepended += str;
        }
        System.out.println(prepended);
    }
}
```
The Java equivalent of the C++ code above is shown in the solution. The program creates a list of strings and then initializes an empty string variable to store the concatenated output. It iterates through each string in the list, appending it to the prepended string variable using the += operator. After all iterations are complete, the final concatenated string is printed out.
