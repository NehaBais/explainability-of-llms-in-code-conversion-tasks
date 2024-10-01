In Java you can achieve the same functionality with the following code:
```java
public class Main {
   public static void main(String args[]) {
      StringBuilder hello = new StringBuilder("Hello world");
      hello.append("!!!!");
      System.out.println(hello);
   }
}
```
Here we create a `StringBuilder` object, which can be mutated and appended to like the Rust `String` type. The append operation is performed using the `append()` method of `StringBuilder` class. The final string is printed out with the help of `System.out.println()` function.
