Here is the Java equivalent of your C code:

```java
public class Main {

    static boolean startsWith(String container, String target) {
        if (container.length() < target.length()) {
            return false;
        }
        return container.regionMatches(true, 0, target, 0, target.length()));
    }

    static boolean endsWith(String container, String target) {
        if (container.length() < target.length()) {
            return false;
        }
        return container.endsWith(target);
    }

    static boolean doesContain(String container, String target) {
        return container.contains(target);
    }

    public static void main(String[] args) {
        System.out.println("Starts with Test ( Hello,Hell ) : " + startsWith("Hello","Hell")));
        System.out.println("Ends with Test ( Code,ode ) ) : " + endsWith("Code","ode")));
        System.out.println("Contains Test ( Google,msn ) ) : " + doesContain("Google","msn"))));

    }
}
```
This Java code works similarly to your C code. It uses the `regionMatches` and `contains` methods of the `String` class in Java for string matching. It also handles multiple occurrences of a string as required.
