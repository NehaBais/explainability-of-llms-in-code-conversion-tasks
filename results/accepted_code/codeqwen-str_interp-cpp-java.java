public class Main {
  public static void main(String[] args) {
    String original = "Mary had a X lamb.";
    String toBeReplaced = "X";
    String replacement = "little";
    int start = original.indexOf("X");
    String newString =
        original.substring(0, start)
            + replacement
            + original.substring(start + toBeReplaced.length());

    System.out.println("String after replacement: " + newString);
  }
}
