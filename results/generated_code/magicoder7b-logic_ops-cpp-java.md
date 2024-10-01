 Here's how you can write the same function in Java:

```java
public class Main {
    public static void main(String[] args) {
        printLogic(true, false);
    }
    
    public static void printLogic(boolean a, boolean b){
        System.out.println("a and b is " + (a && b));
        System.out.println("a or b is " + (a || b));
        System.out.println("not a is " + (!a));
    }
}
```
In this Java code, `printLogic` function takes two boolean values and performs the operation as you specified in your C++ code. The output of each operation will be displayed on separate lines.
