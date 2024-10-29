In Java, we can use the `StringBuilder` class for string concatenation. Here is how you would achieve this in Java:

```java
public class Main {
    public static void main(String[] args) {
        String str = new String("my String");  // original string variable
        String prependStr = "Changed ";  // the other string literal to be prepended
        
        // create a new string by concatenating the two strings.
        String result = prependStr + str;  
        
        System.out.println(result);  // print out the resulting string
    }
}
```
This code creates a string variable, `str` and assigns it the value "my String". It also creates another string variable, `prependStr` which contains the string to be prepended. The strings are concatenated together using `+` operator in Java, then they are printed out using `System.out.println()`.

