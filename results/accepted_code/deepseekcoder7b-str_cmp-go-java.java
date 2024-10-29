public class Main {
  public static void main(String[] args) {
    String c = "cat";
    String d = "dog";

    // Comparing two strings for exact equality and inequality
    if (c.equals(d)) {
      System.out.println(c + " is exactly equal to " + d);
    } else {
      System.out.println(c + " is not exactly equal to " + d);
    }

    // Comparing two strings for lexical comparison in Java
    if (c.compareTo(d) > 0) {
      System.out.println(c + " is lexically greater than " + d);
    } else if (c.compareTo(d) < 0) {
      System.out.println(c + " is lexically less than " + d);
    } else {
      System.out.println(c + " and " + d + " are equal");
    }

    // Case sensitive comparison in Java
    if (c.compareToIgnoreCase(d) > 0) {
      System.out.println("Case-sensitive Comparison: " + c + " is lexically greater than " + d);
    } else if (c.compareToIgnoreCase(d) < 0) {
      System.out.println("Case-sensitive Comparison: " + c + " is lexically less than " + d);
    } else {
      System.out.println("Case-sensitive Comparison: " + c + " and " + d + " are equal");
    }

    // Case insensitive comparison in Java
    if (c.equalsIgnoreCase(d)) {
      System.out.println(c + " is case-insensitively equal to " + d);
    } else {
      System.out.println(c + " is not case-insensitively equal to " + d);
    }

    // For numeric strings, Java behaves the same way as Golang. It will not perform lexical
    // comparison directly.
  }
}
