Here is the equivalent Java code for your C program:

```java
public class Main {
    
    static boolean startsWith(String container, String target) {
        if (container.length() < target.length()) 
            return false;
        return container.substring(0, target.length()).equals(target);
    }
  
    static boolean endsWith(String container, String target){
        if (container.length() < target.length()) 
            return false;
        return container.substring(container.length() - target.length()).equals(target);
    }
  
    static boolean doesContain(String container, String target) {
        return container.contains(target);
    }
    
    public static void main(String[] args){
        System.out.println("Starts with Test (Hello, Hell): " + startsWith("Hello", "Hell"));
        System.out.println("Ends with Test (Code, ode): " + endsWith("Code", "ode"));
        System.out.println("Contains Test (Google, msn): " + doesContain("Google", "msn"));
    }
}
```
The above Java code is a direct conversion from your C program and should work as expected, with the same functionality. 
Note: The contains method only returns true for the first occurrence of the target string in the container string. If you want to handle multiple occurrences or get their positions, you'd need a more complex implementation like using a regex matcher.
