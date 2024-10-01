Here's the Java code that does the same thing as the given C++ code:
```
public class Main {
 public static void printLogic(boolean a, boolean b) {
 System.out.println("a and b is " + (a && b));
 System.out.println("a or b is " + (a || b));
 System.out.println("not a is " + (!a));
 }
 
 public static void main(String[] args) {
 printLogic(true, false);
 }
}
```
In this Java code, we define a class called `Main` with a static method `printLogic` that takes two boolean arguments. We use the logical operators `&&`, `||`, and `!` to compute the results of "and", "or", and "not" on the arguments, respectively. We also use the `System.out.println()` method to print the results to the console.
In the `main` method, we call `printLogic(true, false)` to test the function with some sample inputs. You can modify this call to pass in different values for `a` and `b` to see how the output changes.

