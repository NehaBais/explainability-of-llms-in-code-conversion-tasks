 The error in this Java code is due to incorrect use of apostrophes ('') for string concatenation. Java uses double quotes ("") for String literals, whereas single quotes (' ') are used for characters. This causes a syntax error as the compiler interprets these incorrectly. 

Fix: Use double quotes (" ") instead of single quotes (') to properly concatenate and print the strings.

Corrected Code:

```java
public class Main {
    public static void main(String[] args) {
        System.out.println("YUP is of type " + YUP.getClass() + " and BALL is of type " + BALL.getClass());
        if (YUP.compareTo(BALL) < 0){
            System.out.println("YUP is lexically less than BALL");
        }
        if (YUP.compareTo(BALL) <= 0){
            System.out.println("YUP is lexically less than or equal to BALL");
        }
        if (YUP.compareTo(BALL) > 0){
            System.out.println("YUP is lexically greater than BALL");
        }
        if (YUP.compareTo(BALL) >= 0){
            System.out.println("YUP is lexically greater than or equal to BALL");
        }
        if (YUP.equalsIgnoreCase(BALL)){
            System.out.println("YUP is case insensitively equal to BALL");
        }
        if (!YUP.equalsIgnoreCase(BALL)){
            System.out.println("YUP is not case insensitively equal to BALL");
        }
    }
}
```
This code compares `YUP` and `BALL` lexicographically in Java, prints the comparison results, and also checks for equality while ignoring cases (`equalsIgnoreCase`).
Note that compareTo() method is used instead of <, > operators because they only work with numbers. compareTo() works with any comparable object, like String.
