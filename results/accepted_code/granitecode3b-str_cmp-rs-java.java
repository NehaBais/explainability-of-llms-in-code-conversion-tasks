public class Main {
  public static void main(String[] args) {
    String a = "abc";
    String b = "Bac";

    // Strings are coerced to String when borrowed and needed
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
    if (!(a.compareTo(b) > 0)) {
      System.out.println("The first string is not lexically after the second");
    }
    if (!(a.compareTo(b) < 0)) {
      System.out.println("The first string is not lexically before the second");
    }

    // case-insensitives:

    // equality
    // this avoids new allocations
    if (a.equalsIgnoreCase(b)) {
      System.out.println("Both strings are equal when ignoring case");
    }

    // everything else, create owned Strings, then compare as above
    String a2 = a.toUpperCase();
    String b2 = b.toUpperCase();

    // repeat checks
  }
}
