I have successfully converted the given C code to Java. Here is the translated Java code:
```java
void print_logic(boolean a, boolean b) {
    System.out.printf("a and b is %s%n", a && b);
    System.out.printf("a or b is %s%n", a || b);
    System.out.printf("not a is %s%n", !a);
}
```
This Java function will take two boolean values, perform the "and" and "or" operations on them as well as the negation of the first argument, and then print out the results. Note that in Java, boolean variables are defined using "boolean" instead of "int". The "&&" operator in Java does a logical "and", and "||" is used for logical "or". Also, the "!" operator in Java stands for negation as well.
