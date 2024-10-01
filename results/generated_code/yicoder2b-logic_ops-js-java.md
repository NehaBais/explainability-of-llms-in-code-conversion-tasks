Sure, here is the equivalent Java code for the given JavaScript function. It's important to note that in Java, we don't have native boolean data type. Instead, we use int with values 0 and 1 for true and false respectively.

```java
public class Main {
    static void logic(int a, int b) {
        System.out.println("a AND b: " + (a & b)); // bitwise AND operator
        System.out.println("a OR b: " + (a | b)); // bitwise OR operator
        System.out.println("NOT a: " + ~a); // bitwise NOT operator 
    }
  
    public static void main(String[] args) {
        logic(0, 1);
    }
}
```
This Java code does exactly what the original JavaScript function did, but with some changes. It prints the result of "AND", "OR" and "NOT" operations on boolean values as well as on integers (which are indeed boolean in Java). The "~a" is equivalent to "!a" since ~0 equals 1 and ~1 equals 0 in bitwise operation.
