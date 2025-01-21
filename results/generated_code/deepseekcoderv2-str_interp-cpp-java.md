 Here's the equivalent Java code for the given C++ program:

```java
public class StringInterpolation {
    public static void main(String[] args) {
        String original = "Mary had a X lamb.";
        String toBeReplaced = "X";
        String replacement = "little";
        
        // Find the index of "X" in the original string
        int startIndex = original.indexOf("X");
        
        if (startIndex != -1) {
            // Replace "X" with the replacement string
            String newString = original.substring(0, startIndex) + replacement + original.substring(startIndex + toBeReplaced.length());
            System.out.println("String after replacement: " + newString);
        } else {
            System.out.println("The substring was not found.");
        }
    }
}
```

This Java code performs the same string interpolation as the original C++ code, replacing the placeholder "X" with the specified replacement string "little".
