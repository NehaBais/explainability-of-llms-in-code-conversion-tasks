Here's the equivalent Java code for your C function:

```java
public class Main {
    public static void main(String[] args) {
        printLogic(true, false);
    }

    static void printLogic(boolean a, boolean b){
        System.out.println("a and b is " + (a && b));
        System.out.println("a or b is " + (a || b));
        System.out.println("not a is " + !a);
    }
}
```
