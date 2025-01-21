The error occurs because Java 8 introduced implicitly declared classes as a preview feature which are not enabled by default starting from Java 9 and above versions. This means these new features can't be used directly in Java programs, they need to be specifically enabled using --enable-preview switch when running the program through the command line or IDE settings.

The fix for this would be: You should use explicit classes instead of implicitly declared classes (default methods). Here is how you could write it without using default methods:
```java
import java.util.function.*;  // import functional interface package

public class Main {
    public static void main(String[] args) {
        LogicTester t = new LogicTester();
        t.printLogic(true, false);
    }
}

interface Logic {
    boolean apply(boolean a, boolean b);  // define the logic interface that accepts two booleans and returns a boolean value.
}

public class LogicTester {
    public void printLogic(boolean a, boolean b) {
        System.out.println("a and b is " + calc((x, y) -> x && y, a, b));  // logical AND 
        System.out.println("a or b is " + calc((x, y) -> x || y, a, b));  // logical OR
        System.out.println("not a is " + calc((x, y) -> !x, a, b));       // logical NOT
    }
  
    public boolean calc(Logic lg, boolean a, boolean b) {
      return lg.apply(a,b);  // this method takes in an interface and applies it to our two booleans.
    }
}
```
This way we are not using any implicitly declared classes as per Java rules and it should work fine now.

