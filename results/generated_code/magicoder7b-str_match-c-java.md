 Here is the Java version of your C code:

```java
public class Main {
    public static void main(String[] args) {
        System.out.println("Starts with Test ( Hello,Hell ) : " + startsWith("Hello","Hell"));
        System.out.println("Ends with Test ( Code,ode ) : " + endsWith("Code","ode"));
        System.out.println("Contains Test ( Google,msn ) : " + doesContain("Google","msn"));
    }
    
    static boolean startsWith(String container, String target) {
        int clen = container.length(), tlen = target.length();
        if (clen < tlen) return false;
        return container.substring(0, tlen).equals(target);
    }
    
    static boolean endsWith(String container, String target) {
        int clen = container.length(), tlen = target.length();
        if (clen < tlen) return false;
        return container.substring(clen - tlen).equals(target);
    }
    
    static boolean doesContain(String container, String target) {
        return container.indexOf(target) != -1;
    }
}
```
Here, `startsWith` and `endsWith` methods in Java use the `substring()` method to extract a portion of the string and compare it with the target string. 

The `doesContain` method uses the `indexOf` method which returns the index within this string where the specified substring was found. If the target is not found, `indexOf` returns -1.
