Here is how you can write the equivalent Java code for the provided Python snippet. 

```java
public class Main {
   public static void main(String[] args) {
      logic(true, false);
   }
   
   public static void logic(boolean a, boolean b) {
      System.out.println("a and b: " + (a && b));
      System.out.println("a or b: " + (a || b));
      System.out.println("not a: " + (!a));
   }
}
```
This Java code defines a method `logic` that takes two boolean arguments and behaves identically to the provided Python function. It prints out the results of the logic operations in question for each pairing of inputs, similar to how it would do with Python's print statements. The keyword "and" and "or" are replaced by `&&` (double-ampersand) and `||` (pipe-character), respectively. And, "not" is represented as an exclamation mark before the variable name.

