public class Main {
  public static void main(String[] args) {
    String a = "abc";
    String b =
        "Bac".intern(); // This forces a to be interned in memory, which is equivalent to "Bac"

    // String and String or String (&str) can be compared but not &str and String
    if (a == b) {
      System.out.println("The strings are equal");
    }
    if (!(a != b)) {
      System.out.println("The strings are not equal");
    }
    if (a.compareTo(b) > 0) {
      System.out.println("The first string is lexically after the second");
    }
    if (a.compareTo(b) < 0) {
      System.out.println("The first string is lexically before the second");
    }
    if (!(a.compareTo(b) <= 0)) {
      System.out.println("The first string is not lexically before the second");
    }
    if (!(a.compareTo(b) >= 0)) {
      System.out.println("The first string is not lexically after the second");
    }
  }
}
