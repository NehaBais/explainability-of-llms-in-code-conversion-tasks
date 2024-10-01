Here is the Java equivalent of your C code:

```java
public class Main {
    public static void main(String[] args) {
        System.out.println("Starts with Test ( Hello,Hell ) : " + startsWith("Hello","Hell"));
        System.out.println("Ends with Test ( Code,ode ) : " + endsWith("Code","ode"));
        System.out.println("Contains Test ( Google,msn ) : " + doesContain("Google","msn"));
    }

    public static int startsWith(String container, String target) {
        int clen = container.length(), tlen = target.length();
        if (clen < tlen)
            return 0;
        return container.substring(0, tlen).equals(target);
    }

    public static int endsWith(String container, String target) {
        int clen = container.length(), tlen = target.length();
        if (clen < tlen)
            return 0;
        return container.substring(clen - tlen).equals(target);
    }

    public static int doesContain(String container, String target) {
        return container.indexOf(target) != -1;
    }
}
```

In this Java code, we define three methods that perform the requested string matching operations: startsWith(), endsWith() and doesContain(). These functions have been translated from their C counterparts by using similar logic. 

The startsWith() function uses substring method of String class in Java to compare first part of a string with the target string, it returns 1 if they match else 0.
The endsWith() function uses substring method of String class in Java to get last part of the string and then compares it with the target string, it returns 1 if they match else 0.
The doesContain() function use indexOf() method of String class which will return -1 if target is not found in container string, if target is found then it will return the starting index of the first occurrence of target string in container string.
