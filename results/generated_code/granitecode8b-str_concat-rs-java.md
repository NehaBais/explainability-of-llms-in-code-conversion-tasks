Here's the converted Java code that meets your requirements:
```
public class Main {
 public static void main(String[] args) {
 String s = "hello";
 System.out.println(s);
 
 String s1 = s + " world";
 System.out.println(s1);
 }
}
```
In this Java code, we create a string variable `s` and assign it the value `"hello"`. We then print out the value of `s` using `System.out.println()`.
Next, we create another string variable `s1` and concatenate it with the original `s` variable and the string literal `" world"`. We print out the value of `s1` using `System.out.println()`. 
Note that in Java, strings are immutable, so when we concatenate them, a new string is created rather than modifying the existing one. This means that the original value of `s` is not modified by the concatenation operation.

