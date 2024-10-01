Here is the Java code that fulfills the given requirements:
```
public class Main {
 public static void main(String[] args) {
 String s = "12345678";
 s = "0" + s; // by concatenation
 System.out.println(s);
 }
}
```
In this code, we first declare a string variable `s` and assign it the value `"12345678"`. Then, we prepend the string with another string literal `"0"` using the concatenation operator `+`, which results in the new string `"012345678"`. Finally, we print the resulting string to the console.

