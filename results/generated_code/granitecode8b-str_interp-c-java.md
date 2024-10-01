Here's the equivalent Java code for the given C code snippet, which demonstrates string interpolation using the `printf` method:
```java
public class Main {
 public static void main(String[] args) {
 String extra = "little";
 System.out.println("Mary had a " + extra + " lamb.");
 }
}
```
In this Java code, we first declare a `String` variable named `extra` and assign it the value `"little"`. Then, we use string interpolation to replace the `%s` placeholder in the `printf` statement with the value of `extra`, resulting in the output "Mary had a little lamb."

