Sure, here's the equivalent Java code for the given Rust code snippet:
```java
public class StringInterpolationExample {
 public static void main(String[] args) {
 System.out.println("Mary had a " + "little" + " lamb");
 System.out.println("{1} had a {0} lamb", "Mary", "little");
 System.out.println("{name} had a {adj} lamb", "Mary", "little", "adj");
 }
}
```
In this Java code, we have defined a `main` method that prints the output of the given Rust code snippet. The string interpolation is done using the plus sign (+) operator to concatenate the values with the original string. We also use the named arguments syntax to specify the order and names of the variables in the interpolated string.

