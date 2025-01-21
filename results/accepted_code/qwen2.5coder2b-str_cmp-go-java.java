public class Main {
  public static void main(String[] args) {
    String c = "cat";
    String d = "dog";

    // Compare bytewise equality
    if (c.equals(d)) {
      System.out.println(c + " is bytewise identical to " + d);
    } else {
      System.out.println(c + " is bytewise different from " + d);
    }

    // Compare lexicographically
    int cmp = c.compareTo(d);
    if (cmp == 0) {
      System.out.println(c + " is lexically the same as " + d);
    } else if (cmp < 0) {
      System.out.println(c + " is less than " + d);
    } else {
      System.out.println(c + " is greater than " + d);
    }

    // Compare bytewise lexicographically
    if (c.compareToIgnoreCase(d) == 0) {
      System.out.println(c + " equal to " + d + " (ignoring case)");
    } else {
      System.out.println(c + " not equal to " + d + " (ignoring case)");
    }
  }
}
