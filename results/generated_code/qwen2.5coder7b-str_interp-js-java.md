In Java, you can use String's `replace()` method for string interpolation. Here is how you would convert that JavaScript code to Java:

```java
public class Main {
    public static void main(String[] args) {
        String original = "Mary had a X lamb";
        String little = "little";
        
        // replace() does not change the original string, so we don't need a new variable for the result.
        String replaced = original.replace("X", little);
        
        System.out.println(replaced);  //prints: Mary had a little lamb
    }
}
```

In Java, unlike JavaScript, strings are immutable. That means that when you perform operations on them like `replace()`, they actually create a new string and leave the original one unchanged. So, in our code we directly assign the result of `original.replace("X", little)` to the variable `replaced`.
