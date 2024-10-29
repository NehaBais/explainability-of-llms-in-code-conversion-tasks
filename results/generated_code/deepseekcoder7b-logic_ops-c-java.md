Here's the equivalent Java code for your C function:

```java
public class Main {
    public static void main(String[] args) {
        printLogic(true, false);
    }
    
    static void printLogic(boolean a, boolean b){
       System.out.println("a and b is " + (a && b));
       System.out.println("a or b is " + (a || b));
       System.out.println("not a is " + (!a));
    }
}
```

In this Java code, the `printLogic` function takes two boolean values as parameters and then prints their results for AND, OR, and NOT operations respectively. The printf-style formatting from your C version is replaced with standard concatenation in a string, using the logical operators `&&` (and), `||` (or) and `!` (not) in Java work similarly to C but return boolean values instead of integer ones.

