public class Main {
  public static void main(String[] args) {
    String original = "Mary had a X lamb.";
    String toBeReplaced = "X";
    String replacement = "little";

    int startIndex = original.indexOf(toBeReplaced);
    if (startIndex != -1) {
      original =
          original.substring(0, startIndex)
              + replacement
              + original.substring(startIndex + toBeReplaced.length());
    }

    System.out.println("String after replacement: " + original);
  }
}
