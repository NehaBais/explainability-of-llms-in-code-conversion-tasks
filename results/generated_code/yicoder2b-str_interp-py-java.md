The equivalent Java code for the given Python code is:
```java
public class Main {
    public static void main(String[] args) {
        String extra = "little";
        String newStr = String.format("Mary had a %s lamb.", extra);
        System.out.println(newStr);
    }
}
```
This Java code uses the `String.format` function to replace the placeholder in the string with the value of `extra` variable. 
The usage of `%s` is for string interpolation and refers to the next argument passed to it, which will be replaced by that argument in the string.
