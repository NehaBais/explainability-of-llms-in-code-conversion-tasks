The error is due to missing semicolon at the end of the `System.out.println(s + " literal"));` statement. The semicolon denotes the end of a statement in Java, which also includes ending a line of code.

Fix: Add a semicolon (;) after the `System.out.println(s + " literal"));` statement to resolve the error.

Corrected code block:

```java
public class Main {

    public static void main(String[] args) {
        
        // Variable 's' declaration and assignment
        String s = "hello";
        System.out.println("'" + s + "' literal"); 

        /* or */
        System.out.println(s + " literal"));

        // String concatenation using '+'
        String s2 = s + " literal";
        System.out.println(s2);
    }

    public static String sconcat(String s1, String s2) {
        return s1 + s2;
    }
}
```
