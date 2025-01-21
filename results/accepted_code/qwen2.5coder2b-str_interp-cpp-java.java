public class Main {
  public static void main(String[] args) {
    String original = "Mary had a X lamb.";
    String replacement = "little";

    // Using String.format for interpolation.
    String newString = String.format(original, replacement);

    System.out.println("String after replacement: " + newString);
  }
}
