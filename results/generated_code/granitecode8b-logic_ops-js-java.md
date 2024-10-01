Here is the converted Java code that meets the requirements:
```java
public class Logic {
 public static void main(String[] args) {
 boolean a = true;
 boolean b = false;
 System.out.println("a AND b: " + (a && b));
 System.out.println("a OR b: " + (a || b));
 System.out.println("NOT a: " + (!a));
 }
}
``` 
This code declares two boolean variables `a` and `b`, initializes them to true and false respectively, and then uses the logical operators `&&`, `||`, and `!` to perform the required operations and print the results. The output of this program will be:

a AND b: false
a OR b: true
NOT a: false

This is because `true && false` evaluates to false, `true || false` evaluates to true, and `!true` evaluates to false.

