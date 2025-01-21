The error message is "cannot find symbol" which indicates that Java does not recognize the variable `First`. In Java, we need to use instance variables or local variables, but not global variables.

The fix is to replace `First` with `First`, remove any leading/trailing white spaces around `First` and `Second`.

Here's the corrected code:

```java
import java.util.*;

public class Main {
  public static void main(String[] args) {
    match("abracadabra", "abr");
  }

  static void match(String First, String Second) {
    System.out.println("1. " + First + " starts with " + Second + ": " + First.startsWith(Second));
    int i = First.indexOf(Second);
    System.out.println("2. " + First + " contains " + Second + ": " + (i >= 0) + ", ");

    if (i >= 0) {
      System.out.println("2.1. At location " + i);
      for (int start = i + 1; ; start += i + 1) {
        if ((i = First.indexOf(Second, start)) < 0) break;
        System.out.println("2.2. At location " + (start + i));
      }
      System.out.println("2.2. And that's all");
    }

    System.out.println("3. " + First + " ends with " + Second + ": " + First.endsWith(Second));
  }
}
```
