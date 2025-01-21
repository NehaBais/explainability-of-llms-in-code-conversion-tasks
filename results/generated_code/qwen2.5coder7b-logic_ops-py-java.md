Here is the Java version of your Python code:

```java
public class Main {
    public static void main(String[] args) {
        logic(true, false);
        logic(false, true);
        logic(true, true);
        logic(false, false);
    }

    public static void logic(boolean a, boolean b){
        System.out.println("a and b: " + (a && b));
        System.out.println("a or b: " + (a || b));
        System.out.println("not a: " + (!a));
    }
}
```

This Java code defines the `logic` method that takes two boolean parameters, performs the requested logical operations, and prints out the results. The `main` method simply calls this function with some sample arguments to demonstrate its usage.
