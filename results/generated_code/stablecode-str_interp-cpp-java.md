Below is the equivalent Java code for your C++ code. In this case, we are using `replace()` and `indexOf()` methods in Java which serves similar functionality like your C++ code.

Here's how you might write it:

```java
public class Main {
    public static void main(String[] args) {

        String original = "Mary had a X lamb.";
        String toBeReplaced = "X";
        String replacement = "little";

        int indexOfX = original.indexOf(toBeReplaced);

        original = original.replace(toBeReplaced, replacement);

        System.out.println("String after replacement: " + original);

    }
}
```
This Java code will replace 'X' with 'little' in the string "Mary had a X lamb." and print the resulting string.
