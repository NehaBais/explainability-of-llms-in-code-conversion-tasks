In Java, string interpolation is done using the `String.format()` method or String concatenation. So, here's your C code converted to Java and with comments explaining each step of its functionality:

```java
public class Main {
  public static void main(String[] args) {
    // Define a string variable extra with value "little"
    String extra = "little";
    
    // Print out the interpolated string. In Java, %s is used for strings in printf style.
    System.out.printf("Mary had a %s lamb.\n", extra);
  }
}
```
This code will print: `Mary had a little lamb.`

