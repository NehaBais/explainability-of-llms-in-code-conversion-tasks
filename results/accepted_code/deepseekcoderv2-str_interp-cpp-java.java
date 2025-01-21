public class StringInterpolation {
  public static void main(String[] args) {
    String original = "Mary had a X lamb.";
    String toBeReplaced = "X";
    String replacement = "little";

    // Find the index of "X" in the original string
    int startIndex = original.indexOf("X");

    if (startIndex != -1) {
      // Replace "X" with the replacement string
      String newString =
          original.substring(0, startIndex)
              + replacement
              + original.substring(startIndex + toBeReplaced.length());
      System.out.println("String after replacement: " + newString);
    } else {
      System.out.println("The substring was not found.");
    }
  }
}
