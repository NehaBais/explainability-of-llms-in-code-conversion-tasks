Sure, here's the Java code equivalent:
```
public class Main {
    public static void main(String[] args) {
        String original = "Mary had a %s lamb.";
        String replacement = "big";

        // string interpolation in C# is done using {0} to refer to arguments
        System.out.printf(original, replacement);

        // or using {1} and so on if you prefer
        String orderOriginal = "{1} had a {0} lamb.";
        System.out.printf(orderOriginal, "little", "Mary");

        // or using named arguments
        String namedOriginal = "{name} had a {adj} lamb.";
        System.out.printf(namedOriginal, "adj=little", "name=Mary");
    }
}
```
This Java code uses the printf method to replace the string's placeholders with the values that you provide within a formatted string. The placeholder for replacement is indicated using percent (%) followed by curly braces {} and can be replaced by any number (or name) of arguments.
As for how to use this code in your program, please refer to the Java documentation on format strings. The "printf" method is part of the PrintStream class, so you would typically call it using System.out.printf() or similar.
