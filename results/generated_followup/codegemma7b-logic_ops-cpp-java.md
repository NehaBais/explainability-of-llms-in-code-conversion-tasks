The error occurs because the `Main` class is not in a file named `Main.java`. The fix is to rename the file to `Main.java`.

```java
public class Main {
  public static void main(String[] args) {
    LogicCalculator.printLogic(true, true);
    LogicCalculator.printLogic(true, false);
    LogicCalculator.printLogic(false, true);
    LogicCalculator.printLogic(false, false);
  }
}
```
