Here's the equivalent Java code for your C++ function:

```java
public void printLogic(boolean a, boolean b) {
    System.out.println("a and b is " + (a && b)); // logical AND 
    System.out.println("a or b is " + (a || b)); // logical OR
    System.out.println("not a is " + (!a));      // logical NOT
}
```
In Java, the keywords `and` and `or` are used for logical AND (&&) and logical OR (||), respectively. The `not` operator is represented by `!` in Java. Also please note that there's no need to write a semicolon (;) at the end of each print statement because they are followed by closing braces/parentheses which ends the line of code.

