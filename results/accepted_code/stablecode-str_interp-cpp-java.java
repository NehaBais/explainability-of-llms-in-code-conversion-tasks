public class Main {
  public static void main(String[] args) {

    String original = "Mary had a X lamb.";
    String toBeReplaced = "X";
    String replacement = "little";

    int indexOfX = original.indexOf(toBeReplaced);

    original = original.replace(toBeReplaced, replacement);

    System.out.println("String after replacement: " + original);
  }
}
