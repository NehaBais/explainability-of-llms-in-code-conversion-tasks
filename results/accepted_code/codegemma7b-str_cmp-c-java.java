public class StringComparison {

  public static void main(String[] args) {
    String a = "ball";
    String b = "bell";

    // Exact equality comparison
    boolean areEqual = a.equals(b);
    System.out.println("Are " + a + " and " + b + " equal? " + areEqual);

    // Inequality comparison
    boolean areNotEqual = !a.equals(b);
    System.out.println("Are " + a + " and " + b + " not equal? " + areNotEqual);

    // Lexicographical comparison
    boolean isBefore = a.compareTo(b) < 0;
    System.out.println("Is " + a + " before " + b + "? " + isBefore);

    // Lexicographical comparison in reverse
    boolean isAfter = b.compareTo(a) > 0;
    System.out.println("Is " + b + " after " + a + "? " + isAfter);

    // Case sensitive comparison
    boolean areCaseSensitiveEqual = a.equalsIgnoreCase(b);
    System.out.println(
        "Are " + a + " and " + b + " case-sensitive equal? " + areCaseSensitiveEqual);

    // Case insensitive comparison
    boolean areCaseInsensitiveEqual = a.toLowerCase().equals(b.toLowerCase());
    System.out.println(
        "Are " + a + " and " + b + " case-insensitive equal? " + areCaseInsensitiveEqual);

    // Comparison of numeric strings
    String num1 = "123";
    String num2 = "456";
    boolean isNum1BeforeNum2 = num1.compareTo(num2) < 0;
    System.out.println("Is " + num1 + " before " + num2 + "? " + isNum1BeforeNum2);
  }
}
