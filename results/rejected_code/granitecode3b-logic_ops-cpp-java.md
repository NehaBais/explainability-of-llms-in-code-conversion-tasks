Sure, here's the Java code that does the same thing as the C++ code:
```java
public class LogicPrinter {
 public static void printLogic(boolean a, boolean b) {
  System.out.println("a and b is " + (a && b));
  System.out.println("a or b is " + (a || b));
  System.out.println("not a is " + (!a));
 }
 
 public static void main(String[] args) {
  printLogic(true, true); // prints "a and b is true
 a or b is true"
  not a is false"

