Here's the Java equivalent of your C++ code:

```java
public class Main {

    static void print_logic(boolean a, boolean b){
        System.out.println("a and b is " + (a && b)));
        System.out.println("a or b is " + (a || b)));
        System.out.println("not a is " + (!a)));
    }

    public static void main(String[] args) {
        print_logic(true, false);
    }
}
```
This code does the same thing as your C++ code: it takes two boolean values and outputs the result of "and", "or", and "not" on both arguments.
