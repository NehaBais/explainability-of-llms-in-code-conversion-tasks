public class Main {
  public static void main(String[] args) {
    String a = "abc";
    String b = "Bac";

    // Strings are compared by their content (lexicographically)
    if (a.equals(b)) System.out.println("The strings are equal");
    else System.out.println("The strings are not equal");

    // We use compareTo() method for lexicographical comparison of two strings
    int result = a.compareTo(b);

    if (result > 0) System.out.println("The first string is lexically after the second");
    else if (result < 0) System.out.println("The first string is lexically before the second");

    // For case-insensitive comparison, we convert strings to lower-case or upper-case first
    a = a.toLowerCase();
    b = b.toLowerCase();

    // repeat checks
  }
}
