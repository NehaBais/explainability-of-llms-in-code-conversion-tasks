Here is the Java equivalent of your C code:

```java
public class Main {
    public static void main(String[] args) {
        String s = "hello";
        
        System.out.println(s + " literal");  // or System.out.printf("%s literal%n", s);
        
        String s2 = concatStrings(s, " literal");
        System.out.println(s2);
    }
    
    public static String concatStrings(String s1, String s2) {
        return s1 + s2;
    }
}
```
In the Java code:

- The `main` method is equivalent to your `main()` in C. Here we print two versions of a string and concatenate it with another one using a helper function.
   - In Java, `System.out.println()` prints an object on console. If you use multiple arguments separated by commas, they are automatically converted to strings and printed together without any separators in between. 
- The `concatStrings(s1, s2)` method is the equivalent of your `sconcat(s1, s2)` function. In Java, string concatenation can be done with '+' operator. 
- You don't have to allocate and deallocate memory like you do in C because Java handles that automatically using garbage collection. So there is no need for the `free()` call here. If an object isn't used anymore, it will eventually become eligible for garbage collection by the JVM which will free up memory associated with it.
- There are differences between C and Java in handling strings, but this code illustrates how you can accomplish what you were doing in your original code.

