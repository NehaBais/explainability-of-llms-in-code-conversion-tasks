 Here's how you can convert the given JavaScript code to Java, considering string interpolation as described:

```java
public class Main {
    public static void main(String[] args) {
        String original = "Mary had a X lamb";
        String little = "little";
        
        // Replace "X" with "little" in the original string
        String replaced = original.replace("X", little);
        
        System.out.println(replaced); // Output: Mary had a little lamb
    }
}
```

In this Java code, we have defined an `original` string that contains "Mary had a X lamb". We also define a variable `little` with the value "little". The `replace` method is used to replace occurrences of "X" in `original` with the value of `little`. Finally, the modified string (`replaced`) is printed out.
