Here is the equivalent code in Java:
```java
public class Main {
    public static void main(String[] args) {
        String s = "hello";
        System.out.println(s + " literal");

        String s2 = s.concat(" literal");
        System.out.println(s2);
        
        // No need to free memory as Java handles it automatically with garbage collection.
    }
}
```

This code does the same thing as your C code, creating a string variable `s` and concatenating it with another string literal. The concatenated result is then stored in `s2`. Both variables are printed to show their content. Note that in Java, memory management is handled automatically by the garbage collector, so there is no need to manually free allocated memory as in C.
