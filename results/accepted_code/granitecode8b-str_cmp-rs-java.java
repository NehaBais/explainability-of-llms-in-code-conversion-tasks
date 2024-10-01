public class StringComparison {
  public static void main(String[] args) {
    // exact equality
    String a = "abc";
    String b = "Bac";
    if (a.equals(b)) {
      System.out.println("The strings are equal");
    } else {
      System.out.println("The strings are not equal");
    }

    // inequality
    if (!a.equals(b)) {
      System.out.println("The strings are not equal");
    } else {
      System.out.println("The strings are equal");
    }

    // lexical order
    if (a.compareTo(b) < 0) {
      System.out.println("The first string is lexically before the second");
    } else if (a.compareTo(b) > 0) {
      System.out.println("The first string is lexically after the second");
    } else {
      System.out.println("The strings are equal in lexical order");
    }

    // case sensitivity
    if (a.equals(b)) {
      System.out.println("Both strings are equal when ignoring case");
    } else {
      System.out.println("The strings are not equal when ignoring case");
    }

    // other kinds of string comparisons
    String c = "123";
    String d = "456";
    if (c.compareTo(d) < 0) {
      System.out.println("The first string is lexically before the second");
    } else if (c.compareTo(d) > 0) {
      System.out.println("The first string is lexically after the second");
    } else {
      System.out.println("The strings are equal in lexical order");
    }
  }
}
