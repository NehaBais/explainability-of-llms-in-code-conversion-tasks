 Here's how you can write the same function in Java. Note that in Java, boolean values are represented by the keywords true and false, and the logical operators used in C (&&, ||) correspond to those in Java (&&, ||):

```java
public class LogicOperations {
    public static void printLogic(boolean a, boolean b){
        System.out.println("a and b is " + (a && b));
        System.out.println("a or b is " + (a || b));
        System.out.println("not a is " + !a);
    }
    
    public static void main(String[] args) {
        // test the function with some boolean values
        printLogic(true, false);
        printLogic(false, true);
        printLogic(false, false);
    }
}
```
You can use this function by calling `printLogic` method with two booleans as arguments. It will output the result of "and", "or" and "not" operations on the input boolean values.
