Here's the Java code that implements the same functionality as the given Python code:
```java
public class CompareStrings {
 public static void main(String[] args) {
 compare("YUP", "YUP");
 compare("BALL", "BELL");
 compare("24", "123");
 compare(24, 123);
 compare(5.0, 5);
 }
 public static void compare(String a, String b) {
 System.out.printf("%s is of type %s and %s is of type %n", a, a.getClass(), b, b.getClass());
 if (a.compareTo(b) < 0) {
 System.out.println(a + " is strictly less than " + b);
 } else if (a.compareTo(b) == 0) {
 System.out.println(a + " is equal to " + b);
 } else {
 System.out.println(a + " is strictly greater than " + b);
 }
 }
 public static void compare(int a, int b) {
 compare(String.valueOf(a), String.valueOf(b));
 }
 public static void compare(double a, double b) {
 if (a == b) {
 System.out.println(a + " is equal to " + b);
 return;
 }
 if (a < b) {
 System.out.println(a + " is strictly less than " + b);
 return;
 }
 System.out.println(a + " is strictly greater than " + b);
 }
}
```
This Java code defines a class called `CompareStrings` with a main method that calls three different comparison methods: `compare`, which compares two strings, and two other overloaded versions of the same method, one for integers and one for doubles. 
Each of these methods takes two arguments, `a` and `b`. The first method prints out some information about the types of `a` and `b` and then performs a lexical comparison using the `compareTo` method. If `a` is less than `b`, it prints that `a` is strictly less than `b`. If `a` is equal to `b`, it prints that `a` is equal to `b`. Otherwise, it prints that `a` is strictly greater than `b`.
The second and third methods call the first method with their arguments converted to strings using `String.valueOf`. This allows them to compare integers and doubles as if they were strings. 
Note that this code only performs lexical comparisons between strings. If you want to perform more advanced string comparisons, such as comparing substrings or performing regular expression matching, you may need to use a different approach.

