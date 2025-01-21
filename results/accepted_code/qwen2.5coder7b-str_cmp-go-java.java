public class Main {
  public static void main(String[] args) {
    String c = "cat";
    String d = "dog";

    if (c.equals(d)) {
      System.out.println(c + " is bytewise identical to " + d);
    }
    if (!c.equals(d)) {
      System.out.println(c + " is bytewise different from " + d);
    }

    if (c.compareTo(d) > 0) {
      System.out.println(c + " is lexically bytewise greater than " + d);
    }
    if (c.compareTo(d) < 0) {
      System.out.println(c + " is lexically bytewise less than " + d);
    }

    if (c.compareToIgnoreCase(d) > 0) {
      System.out.println(c + " is lexicographically case-insensitively greater than " + d);
    }
    if (c.compareToIgnoreCase(d) < 0) {
      System.out.println(c + " is lexicographically case-insensitively less than " + d);
    }

    // Java's string comparisons are Unicode based.
    // For numeric strings, they are not treated lexically.
    // This is similar to how Go handles this.

    // Java does not have an equivalent to the golang.org/x/text subrepository,
    // but there are additional libraries like ICU4J that provide these functionalities.
  }
}
