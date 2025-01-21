The error occurs because the ArrayList is not declared or initialized, which throws a compilation error.

To fix the error, declare an instance of `ArrayList` first before adding elements to it. The corrected code would look like this:

```java
import java.util.ArrayList;

public class Main {
  public static void main(String[] args) {
    // Declare and initialize ArrayList
    ArrayList<String> MyStrings = new ArrayList<>();
    MyStrings.add("prepended to");
    MyStrings.add("my string");

    String prepended = MyStrings.stream().reduce("", (A, b) -> A + b);

    System.out.println(prepended);
  }
}
```
