 In Java, you can use `String.replace()` method but it cannot take a variable as argument. So in order to replace a value with a variable, we'll need to use `String.format()`. Here is how you could convert your JavaScript code to Java:

```java
public class Main {
    public static void main(String[] args) {
        String original = "Mary had a %s lamb."; // %s is placeholder for variable
        String little = "little"; 
        String replaced = String.format(original, little); 
        
        System.out.println(replaced);
    }
}
```
In the above code, `%s` is a placeholder for the string which will replace `"X"`. The `String.format()` function replaces that placeholder with the variable value passed as an argument. Hence, `"%s"` becomes `"little"`, resulting in `"Mary had a little lamb."`.
