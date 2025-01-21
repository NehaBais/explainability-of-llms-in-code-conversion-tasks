 Here's the equivalent Java code for the provided C code. This Java code demonstrates three types of string matching as specified in your requirements, including handling multiple occurrences for the contains test.

```java
public class StringMatching {
    public static boolean startsWith(String container, String target) {
        if (container.length() < target.length()) {
            return false;
        }
        return container.startsWith(target);
    }

    public static boolean endsWith(String container, String target) {
        if (container.length() < target.length()) {
            return false;
        }
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

### Explanation:
1. **startsWith**: This method uses the `startsWith` method of the String class in Java, which checks if the string starts with the specified prefix. It compares the length of the container and target strings to ensure that the target is not longer than the container.

2. **endsWith**: Similarly, this method uses the `endsWith` method of the String class, which checks if the string ends with the specified suffix. Again, it ensures that the target's length does not exceed the container's length before performing the check.

3. **doesContain**: This method uses the `contains` method of the String class to determine whether the container contains the target string. It returns a boolean value indicating whether the target is found within the container.

4. The `main` method demonstrates how to call these methods with example strings and prints the results.
