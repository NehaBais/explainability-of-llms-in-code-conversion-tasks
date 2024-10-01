public class Main {
  public static void main(String[] args) {
    // only same types can be compared
    // String and String or String literal (String) and String object (String str = "string")
    // exception: strict equality and inequality also work on String literals and String objects
    String A = "abc";
    String b = new String("Bac");

    // Strings are coerced to String when needed
    if (A.equals(b)) {
      System.out.println("The strings are equal");
    }
    if (!A.equals(b)) {
      System.out.println("The strings are not equal");
    }
    if (A.compareTo(b) > 0) {
      System.out.println("The first string is lexically after the second");
    }
    if (A.compareTo(b) < 0) {
      System.out.println("The first string is lexically before the second");
    }
    if (A.compareTo(b) >= 0) {
      System.out.println("The first string is not lexically before the second");
    }
    if (A.compareTo(b) <= 0) {
      System.out.println("The first string is not lexically after the second");
    }

    // case-insensitives:

    // equality
    String A2 = A.toUpperCase();
    String b2 = b.toUpperCase();

    if (A2.equals(b2)) {
      System.out.println("Both strings are equal when ignoring case");
    }
  }
}
