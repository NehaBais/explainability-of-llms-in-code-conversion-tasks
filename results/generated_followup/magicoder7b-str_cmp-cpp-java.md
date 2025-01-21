 The error is due to trying to use an int (returned by `Double.compare(a, b)`) as a boolean (`? "": ""` part of the ternary operator). A boolean in Java can be either true or false, not a number like 0 and 1. This would cause a compile-time error because it's not compatible types to do `? "": ""`.

The fix is very simple, we just need to convert the int (returned by `Double.compare(a, b)`) into boolean. In Java, any nonzero number can be considered as true, and zero is considered as false. So, you can use this condition in ternary operator: `(Double.compare(a, b) != 0)`. This way, the int is converted to a boolean and it can work fine with `? "": ""`.

Here's your corrected code:

```java
static void demoCompare(double a, double b) {
    System.out.println(
        a
            + " and "
            + b
            + " are "
            + ((Double.compare(a, b) != 0) ? "" : "not ")
            + "numerically inequal.");
}
```
