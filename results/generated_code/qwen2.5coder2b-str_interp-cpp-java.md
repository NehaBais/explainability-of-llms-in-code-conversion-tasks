In Java, string interpolation is achieved using the `String.format` method, which can be used to replace placeholders (specified by `{}` or `$`) with values. This method does not require defining variables and does not require replacing specific characters in a string as in C++. 

Here's how you could translate your code to Java:

```java
public class Main {
    public static void main(String[] args) {
        String original = "Mary had a X lamb.";
        String replacement = "little";

        // Using String.format for interpolation.
        String newString = String.format(original, replacement);

        System.out.println("String after replacement: " + newString);
    }
}
```

In this code, `original` and `replacement` are used directly in the `String.format` method. `{}` is used as a placeholder, which will be replaced by the `replacement` value.

The `System.out.println` statement outputs the newly created string to the console.
