Here's the Java code that performs the same operations as the C code you provided:
```java
public class Main {
 public static void main(String[] args) {
 String str = "Good Morning";
 String cstr = " to all";
 String cstr2 = " !!!";
 
 if (str.length() + cstr.length() + cstr2.length() < 24) {
 str += cstr;
 str += cstr2;
 System.out.println(str);
 } else {
 System.out.println("Space allocated to str is insufficient.");
 }
 }
}
```
In this Java code, we first define the three string variables `str`, `cstr`, and `cstr2` with their respective values. We then check if the total length of the strings plus the length of the third string (`cstr2`) is less than 24 characters using an if statement. If this condition is true, we use the `+=` operator to concatenate the three strings together into a single string variable called `str`. Finally, we print the contents of `str` using `System.out.println()`.

