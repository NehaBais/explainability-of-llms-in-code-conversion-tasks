 Here is the converted code in Java:
```
import java.util.Scanner;
public class Interpolation {
 public static void main(String[] args) {
    String original = "Mary had a X lamb.";
    String toBeReplaced = "X";
    String replacement = "little";
    int indexOfX = original.indexOf(toBeReplaced);
    if (indexOfX >= 0) {
        String newString = original.substring(0, indexOfX) + replacement + original.substring(indexOfX + toBeReplaced.length());
        System.out.println("String after replacement: " + newString);
    } else {
        System.out.println("The string does not contain the substring '" + toBeReplaced + "'.");
    }
 }
}
```
In this code, we first define three variables `original`, `toBeReplaced`, and `replacement` as strings. We then use the `indexOf()` method of the `String` class to find the index of the substring `toBeReplaced` in `original`. If the index is greater than or equal to 0, we replace the substring with the value of `replacement` using the `substring()` method. Finally, we print the result using `System.out.println()`.
Note that the `indexOf()` method returns `-1` if the substring is not found in the string. In this case, we print a message indicating that the substring was not found.
