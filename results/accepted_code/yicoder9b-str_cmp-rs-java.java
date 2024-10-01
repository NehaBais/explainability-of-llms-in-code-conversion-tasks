public class Main {
  public static void main(String[] args) {
    String a = "abc";
    String b = new String("Bac"); // Create an instance of string b.

    // Comparison for exact equality
    if (a.equals(b)) System.out.println("The strings are equal");
    else System.out.println("The strings are not equal");

    // Comparison for inequality
    if (!a.equals(b)) System.out.println("The strings are not equal");
    else System.out.println("The strings are equal");

    // Comparing if one is lexically ordered before than the other
    if (a.compareTo(b)
        < 0) { // Returns a negative integer if string a is lexographically less than b.
      System.out.println("The first string is lexically before the second");
    } else System.out.println("The first string is not lexically before the second");
    // Comparing if one is lexically ordered after than the other
    if (a.compareTo(b) > 0) { // Returns a positive integer if a is lexographically greater than b.
      System.out.println("The first string is lexically after the second");
    } else System.out.println("The first string is not lexically after the second");
    // Comparing for case insensitive equality
    if (a.equalsIgnoreCase(b)) {
      System.out.println("Both strings are equal when ignoring case");
    } else {
      System.out.println("The strings are not equal irrespective of case");
    }
  }
}
