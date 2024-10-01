Here is the equivalent Java code for your C++ code:

```java
public class Main {
   public static void main(String[] args) {
      String original = "Mary had a X lamb.";
      String toBeReplaced = "X";
      String replacement = "little";
      int start = original.indexOf("X");
      String newString = original.substring(0, start) + replacement 
            + original.substring(start + toBeReplaced.length());

      System.out.println("String after replacement: " + newString);
   }
}
```
This code does the same thing as your C++ code. It finds the index of the first occurrence of "X" in the string and then replaces it with the word "little". The `indexOf()` method is used to get the position of a specific character, in this case, 'X', while the `substring()` method is used to extract parts of a string.
