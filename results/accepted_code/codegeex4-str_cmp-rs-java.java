public class Main {
  public static void main(String[] args) {
    String a = "abc";
    String b = new String("Bac");

    // Case sensitive comparison
    if (a.equals(b)) {
      System.out.println("The strings are equal");
    }
    if (!a.equals(b)) {
      System.out.println("The strings are not equal");
    }

    // Lexical comparison
    int comparisonResult = a.compareTo(b);
    if (comparisonResult < 0) {
      System.out.println("The first string is lexically before the second");
    } else if (comparisonResult > 0) {
      System.out.println("The first string is lexically after the second");
    }

    // Case insensitive comparison
    if (a.equalsIgnoreCase(b)) {
      System.out.println("Both strings are equal when ignoring case");
    }
  }
}
