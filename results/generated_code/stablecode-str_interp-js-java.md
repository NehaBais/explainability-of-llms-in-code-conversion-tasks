In Java, you can use `String.format()` or `StringBuilder` to perform string interpolation similar to JavaScript's template literals (``).
Here is the equivalent code in Java:

```java
public class Main {

    public static void main(String[] args) {

        String original = "Mary had a X lamb.";
        String little = "little";
        
        // Using String.format() function for string interpolation
        String replaced = String.format(original, little);
        System.out.println("Replaced String: " + replaced);
        
        // Using StringBuilder for string interpolation
        StringBuilder sb = new StringBuilder();
        sb.append(original);
        int index = sb.indexOf("X"); // find the position of 'X' in original string
        if (index != -1) { // if 'X' is found 
            sb.replace(index, index + 1), little); // replace 'X' with "little"  
        }
        System.out.println("Replaced String: " + sb.toString());

    }
}
```
The code provided above performs string interpolation similar to JavaScript's template literals (``). It replaces the character sequence "X" in the original string with the value of the variable "little". The output will be "Mary had a little lamb."
