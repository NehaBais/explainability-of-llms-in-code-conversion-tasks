 In Java, the code would look like this:

```java
public class Main {
    public static void main(String[] args) {
        final String s = "hello";
        
        System.out.println(s + " literal");
        // or
        System.out.printf("%s%s\n", s, " literal");
    
        String s2 = sconcat(s, " literal");
        System.out.println(s2);
    }
    
    public static String sconcat(final String s1, final String s2) {
        return new StringBuilder(s1).append(s2).toString();
    }
}
```

The `sconcat` function in this Java version works similarly to the C one. It concatenates two strings and returns a new string. Note that we use the `StringBuilder` class, which is more efficient than using multiple calls to `strcat`. We use `final` keyword in Java for variables that will not be changed after initialization.
