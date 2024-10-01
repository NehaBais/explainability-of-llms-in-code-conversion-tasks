Here is the converted code in Java:
```java
import java.util.Arrays;
public class Main {
 public static void main(String[] args) {
  String[] myStrings = {"prepended to", "my string"};
  String prepended = Arrays.stream(myStrings).reduce("", (a, b) -> a + b);
  System.out.println(prepended);
 }
}
``` 
In this code, we first declare an array of strings called `myStrings` which contains the text value to be prepended. We then use the `Arrays.stream()` method to convert the array into a stream and apply the `reduce()` method on it. The reduce() method takes two arguments: an initial value (in this case, an empty string) and a lambda expression that concatenates each element of the stream with the accumulator (which is initially an empty string). Finally, we print the resulting string to the console using the `println()` method.

