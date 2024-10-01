public class StringComparison {

  public static void main(String[] args) {

    // String and String comparison
    String a = "abc";
    String b = "Bac";

    if (a.equals(b)) {
      System.out.println("The strings are equal");
    }

    if (!a.equals(b)) {
      System.out.println("The strings are not equal");
    }

    if (a.compareTo(b) > 0) {
      System.out.println("The first string is lexically after the second");
    }

    if (a.compareTo(b) < 0) {
      System.out.println("The first string is lexically before the second");
    }

    if (a.compareTo(b) >= 0) {
      System.out.println("The first string is not lexically before the second");
    }

    if (a.compareTo(b) <= 0) {
      System.out.println("The first string is not lexically after the second");
    }

    // Case-insensitive comparison
    String aLower = a.toLowerCase();
    String bLower = b.toLowerCase();

    if (aLower.equals(bLower)) {
      System.out.println("Both strings are equal when ignoring case");
    }

    // Numeric string comparison
    String c = "123";
    String d = "456";

    if (c.compareTo(d) < 0) {
      System.out.println("The first number string is lexically before the second");
    }
  }
}
