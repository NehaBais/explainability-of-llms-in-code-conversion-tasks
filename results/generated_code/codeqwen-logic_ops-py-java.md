Here is how you can convert the Python code to Java. This is what the Java version of your Python function might look like:

```java
public class Logic {
    public static void main(String[] args) {
        logic(true, false);
    }

    public static void logic(boolean A, boolean B) {
        System.out.println("A and B: " + (A && B));
        System.out.println("A or B: " + (A || B));
        System.out.println("Not A: " + !A);
    }
}
```

In Java, the boolean operators are used with two equal signs (`==`) and not one like in Python (`=`) . The double equals sign `&&` is used for AND operation, the single equals sign `||` is used for OR operation, and for NOT operation `!` is used. 
Remember to run this code within a Java environment as it may not work in an online IDE due to the absence of console or output stream.
