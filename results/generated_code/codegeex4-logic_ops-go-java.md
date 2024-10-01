In Java, you can achieve similar functionality with the following code:

```java
public class Main {
    public static void printLogic(boolean a, boolean b) {
        System.out.println("a and b is " + (a && b));
        System.out.println("a or b is " + (a || b));
        System.out.println("not a is " + (!a));
    }
  
    public static void main(String[] args) {
        printLogic(true, false);
    }
}
```

In this Java code, `printLogic` method takes two boolean arguments and performs logical operations on them. The results are printed to the console.
