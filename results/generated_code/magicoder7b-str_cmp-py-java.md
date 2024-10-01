 In Java, you can use the `String` class to manipulate and compare strings. Here is how you could perform similar operations in Java as compared with Python:

```java
public class Main {
    public static void main(String[] args) {
        System.out.println("YUP is of type " + YUP.getClass() + " and BALL is of type " + BALL.getClass());
        if (YUP <  BALL){
            System.out.println('YUP' + " is strictly less than " + 'BALL');
        }
        if (YUP <= BALL){
            System.out.println("YUP" + " is less than or equal to " + 'BALL');
        }
        if (YUP >  BALL) {
            System.out.println('YUP' + " is strictly greater than " + 'BALL');
        }
        if (YUP >= BALL) {
            System.out.println("YUP" + " is greater than or equal to " + 'BALL');
        }
        if (YUP.equals(BALL)) {
            System.out.println('YUP' + " is equal to " + 'BALL');
        }
        if (!YUP.equals(BALL)) {
            System.out.println('YUP' + " is not equal to " + 'BALL');
        }
    }
}
```
In this Java code, the `String` object `YUP` and `BALL` are compared using standard comparison operators like `<`, `<=`, `>=` etc. In addition to that, the `equals()` method is used for checking if two strings are equal (case sensitive) or not (case insensitive). Note that Java uses `.getClass()` instead of Python's type() function.
