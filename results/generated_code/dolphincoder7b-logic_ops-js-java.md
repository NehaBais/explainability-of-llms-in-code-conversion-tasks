The equivalent Java code for the given JavaScript function is as follows.

```java
public class Main {

    public static void main(String[] args) {
        logic(true, false);
    }

    public static void logic(boolean a, boolean b){
        System.out.println("a AND b: " + (a && b));
        System.out.println("a OR b: " + (a || b));
        System.out.println("NOT a: " + (!a));
    }
}
```
In this Java code, the function `logic` is defined to take two boolean arguments `a` and `b`. The print statements are used to output the logical operations using the respective operators (`&&`, `||`, and `!`). 

The main method calls the logic function with the initial values of `a` and `b`. In this case, it prints "a AND b: false", "a OR b: true", and "NOT a: false" as expected.
