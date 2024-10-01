Here is the Java code that meets the requirements:
```java
public class Main {
 public static void main(String[] args) {
 String s = "hello";
 System.out.println(s + " literal");
 String s2 = s + " literal";
 System.out.println(s2);
 }
}
```
In this Java code, we first declare a string variable `s` and initialize it with the value `"hello"`. We then print the value of `s` concatenated with the string literal `" literal"` using the `+` operator. 
Next, we declare another string variable `s2` and initialize it with the concatenation of `s` and the string literal `" literal"`. Finally, we print the value of `s2`. The output of this program will be:

hello literal
hello literal

Note that in Java, we don't need to include the `#include <string>` or `#include <iostream>` lines at the beginning of the file, as these are included by default. We also don't need to use `std::` before any function or variable names from the standard library - in Java, everything is part of the `java.lang` package by default.

