public class Main {
  public static void main(String[] args) {
    String original = "Mary had a X lamb.";
    String toBeReplaced = "X";
    String replacement = "little";
    String newString = original.replaceFirst(toBeReplaced, replacement);
    System.out.println("String after replacement: " + newString);
  }
}
