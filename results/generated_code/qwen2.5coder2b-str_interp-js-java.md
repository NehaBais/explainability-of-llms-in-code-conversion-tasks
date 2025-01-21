To convert this JavaScript code to Java, you can use `String.format()`. Here's how it would look in Java:

```java
public class Main {
    public static void main(String[] args) {
        String original = "Mary had a X lamb";
        String little = "little";

        // Using the format method to replace 'X' with 'little'
        String replaced = String.format(original, little);

        System.out.println(replaced);
    }
}
```

In this Java code:
- We define two strings: `original` and `little`.
- We use the `String.format()` method to replace the placeholder `'X'` in the `original` string with the value of `little`.
- The result is stored in the `replaced` variable.
- Finally, we print out the `replaced` string.
