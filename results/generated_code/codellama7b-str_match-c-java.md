 Here is the Java code that matches the given C code:
```java
import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String container = "Hello";
        String target = "Hell";
        System.out.println("Starts with Test ( Hello,Hell ) : " + startsWith(container, target));
        container = "Code";
        target = "ode";
        System.out.println("Ends with Test ( Code,ode ) : " + endsWith(container, target));
        container = "Google";
        target = "msn";
        System.out.println("Contains Test ( Google,msn ) : " + doesContain(container, target));
    }
    private static boolean startsWith(String container, String target) {
        if (container.length() < target.length()) return false;
        return container.substring(0, target.length()).equals(target);
    }
    private static boolean endsWith(String container, String target) {
        if (container.length() < target.length()) return false;
        return container.substring(container.length() - target.length(), container.length()).equals(target);
    }
    private static boolean doesContain(String container, String target) {
        return container.contains(target);
    }
}
```
Note that the `startsWith`, `endsWith` and `doesContain` methods are not provided in Java by default, so we had to create them manually. Also, note that the `main` method is used to call these methods and print their results.
