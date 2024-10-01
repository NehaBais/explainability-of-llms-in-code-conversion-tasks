The equivalent code in Java would be:

```java
import java.util.ArrayList;
import java.util.stream.Collectors;

public class Main {
    public static void main(String[] args) {
        ArrayList<String> myStrings = new ArrayList<String>();
        MyStrings.add("prepended to");
        MyStrings.add("my string");

        String prepended = MyStrings.stream()
                .reduce("", (a, b) -> A + b);

        System.out.println(prepended);
    }
}
```
