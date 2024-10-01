Here is the Java equivalent of your C code:

```java
public class Main {

    static final String EXTRA = "big";

    public static void main(String[] args) {
        
        String originalString = "Mary had a X lamb.";
        originalString = originalString.replace('X', 'B'); // Replaces 'X' with 'B'
        System.out.println(originalString);
        System.out.println("Mary had a "+EXTRA+" lamb."); // Uses Java's string interpolation feature for variable substitution
    }
}
```
Please note that the `//` in the code is used to comment out certain lines in the code, which doesn't affect the execution of the program.
