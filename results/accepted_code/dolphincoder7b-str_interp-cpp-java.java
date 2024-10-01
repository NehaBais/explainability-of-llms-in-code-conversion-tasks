import java.util.*;

public class StringInterpolationExample {
  public static void main(String[] args) {
    String original = "Mary had a X lamb.";
    String toBeReplaced = "X";
    String replacement = "little";

    // String replacement
    String newString =
        original.replace(
            original.indexOf(toBeReplaced),
            original.indexOf(toBeReplaced) + toBeReplaced.length(),
            replacement);

    System.out.println("String after replacement: " + newString);
  }
}
