Here is the equivalent Java code for your C program:

```java
public class Main {
    static String concatStrings(String s1, String s2) {
        return s1 + s2;
    }

    public static void main(String[] args) {
        String s = "hello";
        System.out.println(s);
        
        /* or */

        System.out.printf("%s literal\n", s); 
        
        String s2 = concatStrings(s, " literal");
        System.out.println(s2);
    }
}
```

This Java code creates a `Main` class with the main method, which is the entry point of any Java application. Inside this method are defined two string variables - `s` and `s2` where s is given an initial value of "hello" and `s2` is concatenated from `s` with another string literal " literal" using a helper function called concatStrings(). The println() methods display the content of both strings in console.
