public class Main {
  public static void main(String[] args) {
    String c = "cat";
    String d = "dog";

    // Compare two strings for exact equality
    if (c.equals(d)) {
      System.out.println(c + " is exactly identical to " + d);
    }

    // Compare two strings for inequality
    if (!c.equals(d)) {
      System.out.println(c + " is different from " + d);
    }

    // Compare two strings to see if one is lexically ordered before the other
    if (c.compareTo(d) < 0) {
      System.out.println(c + " is lexicographically less than " + d);
    }

    // Compare two strings to see if one is lexically ordered after the other
    if (c.compareTo(d) > 0) {
      System.out.println(c + " is lexicographically greater than " + d);
    }

    // Case sensitive comparison example:
    String e = "CAT";
    if (!c.equals(e)) {
      System.out.println(c + " is different from " + e);
    }

    // Case insensitive comparison using equalsIgnoreCase method
    String f = "Cat";
    if (c.equalsIgnoreCase(f)) {
      System.out.println(c + " is equal to " + f + " ignoring case");
    }
  }
}
