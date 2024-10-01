Here's the Java code that fulfills the given requirements:
```java
public class Main {
 public static void main(String[] args) {
 // text assigned to a string variable
 String s = "hello";

 // output string variable
 System.out.println(s);

 // this output requested by original task description, although
 // not really required by current wording of task description.
 System.out.println(s + " literal");

 // concatenate variable and literal, assign result to another string variable
 String s2 = s + " literal";

 // output second string variable
 System.out.println(s2);
 }
}
```
In this code, we first declare a string variable `s` and assign it the value `"hello"`. We then print the contents of `s` using `System.out.println()`. Next, we concatenate `s` with the string literal `" literal"` and print the result. Finally, we declare another string variable `s2`, concatenate `s` with the string literal `" literal"`, and assign the result to `s2`. We then print the contents of `s2`.

