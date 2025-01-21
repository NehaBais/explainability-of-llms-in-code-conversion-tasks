This error is due to the fact that "123" is of type String, while Integer.parseInt() expects an int input. Hence it cannot be directly compared with a string.

You can fix this by either converting the string into an integer (by using Integer.parseInt()) or you should consider whether your application requires case sensitivity for numeric strings. 

Here's how to correct the code in Java:

```java
public class Main {
  public static void main(String[] args) {
    System.out.println(("abcd" == "abcd") + " " + (!"abcd".equals("abcd"))); // true true 
    System.out.println(Integer.parseInt("123") == Integer.valueOf("123")); // false, because "123" can be parsed into integer and `Integer.valueOf` compares the numerical values, not their references
    System.out.println("ABCD".toLowerCase().equals("abcd".toLowerCase())); // true (case insensitive)
  }
}
```
