Sure, here is the equivalent Java code for your C++ one. We are using the `java.util` package to use the built-in replace method in the String class:

```java
import java.util.*;
public class Main {
    public static void main(String[] args) {
        String original = "Mary had a X lamb.", 
                  toBeReplaced = "X", 
                  replacement = "little";
        System.out.println(original.replace(toBeReplaced, replacement));
    }
}
```
This Java code does the same thing as your C++ one. It replaces "X" in the original string with "little".
