```java
public class Main {
    public static void main(String[] args) {
        String original = "Mary had a X lamb.";
        String toBeReplaced = "X";
        String replacement = "little";

        // Using StringBuilder for efficient string manipulation.
        StringBuilder newString = new StringBuilder(original);
        
        // Find the index of the substring to be replaced.
        int indexToReplace = newString.indexOf(toBeReplaced);

        if (indexToReplace != -1) {
            // Replace the substring with the provided replacement string.
            newString.replace(indexToReplace, indexToReplace + toBeReplaced.length(), replacement);
        }

        System.out.println("String after replacement: " + newString.toString());
    }
}
```
