Sure, here's the equivalent Java code for your C++ function. 

```java
public class Main {
    static void print_logic(boolean a, boolean b){
        System.out.println("a and b is " + (a && b)); // Uses logical AND operator
        System.out.println("a or b is " + (a || b));  // Uses logical OR operator
        System.out.println("not a is " + !a); //Uses logical NOT operator
    }
    public static void main(String[] args) {
        print_logic(true, false); // Testing the function with given values
    }
}
```
This Java code accomplishes essentially the same thing as your C++ code. It takes two boolean (or "logical") values and outputs the results of logical operations (`&&` for AND, `||` for OR, and `!` for NOT on the first value) for both arguments and also the NOT operation on the first argument.
