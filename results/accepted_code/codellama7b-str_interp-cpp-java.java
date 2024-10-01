public class Interpolation {
  public static void main(String[] args) {
    String original = "Mary had a X lamb.";
    String toBeReplaced = "X";
    String replacement = "little";
    int indexOfX = original.indexOf(toBeReplaced);
    if (indexOfX >= 0) {
      String newString =
          original.substring(0, indexOfX)
              + replacement
              + original.substring(indexOfX + toBeReplaced.length());
      System.out.println("String after replacement: " + newString);
    } else {
      System.out.println("The string does not contain the substring '" + toBeReplaced + "'.");
    }
  }
}
