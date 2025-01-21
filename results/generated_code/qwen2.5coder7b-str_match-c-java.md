Here is the Java version of your C code:

```java
public class Main {
    public static void main(String[] args) {
        System.out.println("Starts with Test ( Hello,Hell ) : " + startsWith("Hello", "Hell"));
        System.out.println("Ends with Test ( Code,ode ) : " + endsWith("Code", "ode"));
        System.out.println("Contains Test ( Google,msn ) : " + doesContain("Google", "msn"));
    }

    public static boolean startsWith(String container, String target) {
        if (container.length() < target.length())
            return false;
        return container.substring(0, target.length()).equals(target);
    }

    public static boolean endsWith(String container, String target) {
        if (container.length() < target.length())
            return false;
        return container.substring(container.length() - target.length()).equals(target);
    }

    public static boolean doesContain(String container, String target) {
        return container.contains(target);
    }
}
```
This Java code will produce the same output as your C code. Please note that in Java, strings are immutable and cannot be changed once they are created, unlike in C where string is a character array. Therefore, when dealing with string operations like substring extraction, it's done using methods provided by the String class rather than modifying the original string.
