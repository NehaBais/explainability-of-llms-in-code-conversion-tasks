```java
public class LogicCalculator {

    public static void printLogic(boolean a, boolean b) {
        System.out.println("a and b is " + (a && b));
        System.out.println("a or b is " + (a || b));
        System.out.println("not a is " + (!a));
    }
}

public class Main {
    public static void main(String[] args) {
        LogicCalculator.printLogic(true, true);
        LogicCalculator.printLogic(true, false);
        LogicCalculator.printLogic(false, true);
        LogicCalculator.printLogic(false, false);
    }
}
```

**Output:**

a and b is true
a or b is true
not a is false

a and b is false
a or b is true
not a is false

a and b is false
a or b is true
not a is true

a and b is false
a or b is false
not a is true
