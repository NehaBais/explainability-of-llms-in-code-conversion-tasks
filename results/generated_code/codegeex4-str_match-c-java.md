```java
public class Main {
    public static void main(String[] args) {
        System.out.println("Starts with Test (Hello,Hell): " + startsWith("Hello", "Hell"));
        System.out.println("Ends with Test (Code,ode): " + endsWith("Code", "ode"));
        System.out.println("Contains Test (Google,msn): " + doesContain("Google", "msn"));

        int location = findLocation("Hello World", "World");
        if(location != -1)
            System.out.println("Location of match: " + location);
        else
            System.out.println("No match found");

        findAllOccurrences("Hello Hello Hello", "Hello");
    }

    public static boolean startsWith(String container, String target) {
        return container.startsWith(target);
    }

    public static boolean endsWith(String container, String target) {
        return container.endsWith(target);
    }

    public static boolean doesContain(String container, String target) {
        return container.contains(target);
    }

    public static int findLocation(String container, String target) {
        return container.indexOf(target);
    }

    public static void findAllOccurrences(String container, String target) {
        int index = container.indexOf(target);
        while(index != -1){
            System.out.println("Found at: " + index);
            index = container.indexOf(target, index+target.length());
        }
    }
}
```

This Java code provides the same functionality as your C code. It includes methods for checking if a string starts with another string, ends with another string, or contains another string. The `findLocation` method returns the first occurrence of a substring in a container string and `-1` if no match is found. The `findAllOccurrences` method prints all occurrences of a substring in a container string.
