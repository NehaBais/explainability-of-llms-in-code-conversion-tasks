Here is the equivalent Java code for your C++ program. Note that it uses StringBuilder to prepend strings due to the fact that string concatenation in Java is relatively expensive operation, especially when it comes to multiple operations.

```java
import java.util.Arrays;

public class Main {
    public static void main(String[] args) {
        String[] myStrings = {"prepended to" , "my string"} ;
        StringBuilder prepended = new StringBuilder();
        for (int i = myStrings.length - 1; i >= 0; --i) {
            prepended.append(myStrings[i]);
        }
        System.out.println(prepended.toString());
    }
}
```
