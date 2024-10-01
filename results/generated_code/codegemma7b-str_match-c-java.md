```java
public class StringMatching {

    public static boolean startsWith(String container, String target) {
        return container.startsWith(target);
    }

    public static boolean endsWith(String container, String target) {
        return container.endsWith(target);
    }

    public static boolean doesContain(String container, String target) {
        return container.contains(target);
    }

    public static void main(String[] args) {
        System.out.println("Starts with Test ( Hello,Hell ) : " + startsWith("Hello", "Hell"));
        System.out.println("Ends with Test ( Code,ode ) : " + endsWith("Code", "ode"));
        System.out.println("Contains Test ( Google,msn ) : " + doesContain("Google", "msn"));
    }
}
```

**Note:**

* The `startsWith()` method checks if a string starts with a specified prefix.
* The `endsWith()` method checks if a string ends with a specified suffix.
* The `contains()` method checks if a string contains a specified substring.
* In the `main()` method, we call these methods with the appropriate strings and print the results.
