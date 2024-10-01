The equivalent Java code for the given C++ program is as follows:

```java
import java.util.Arrays;

public class Main {
    public static void main(String[] args) {
        String[] myStrings = {"prepended to", "my string"};
        String prepended = Arrays.stream(myStrings)
                .reduce((a, b) -> a + b)
                .get();
        System.out.println(prepended);
    }
}
```
This Java program accomplishes the same task as the C++ program. It uses Java's Stream API to concatenate all of the string elements in `myStrings` array.
