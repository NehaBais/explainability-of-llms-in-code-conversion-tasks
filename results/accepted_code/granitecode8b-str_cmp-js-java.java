public class StringComparison {
  public static void main(String[] args) {
    boolean equalValue = "abcd".equals("abcd"); // true
    boolean equalTypeAndValue =
        "abcd".equals("abcd") && "abcd".getClass() == "abcd".getClass(); // true
    boolean notEqualValue = !"abcd".equals("abcd"); // false
    boolean notEqualTypeOrValue = !"abcd".equals(123); // true
    boolean lexicallyOrderedBefore = "abcd".compareTo("dcba") < 0; // true
    boolean lexicallyOrderedAfter = "abcd".compareTo("dcba") > 0; // false
    boolean caseInsensitiveEqual = "ABCD".compareToIgnoreCase("abcd") == 0; // true
    System.out.println(equalValue);
    System.out.println(equalTypeAndValue);
    System.out.println(notEqualValue);
    System.out.println(notEqualTypeOrValue);
    System.out.println(lexicallyOrderedBefore);
    System.out.println(lexicallyOrderedAfter);
    System.out.println(caseInsensitiveEqual);
  }
}
