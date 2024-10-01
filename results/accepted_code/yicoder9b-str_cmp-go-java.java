public class Main {
  public static void main(String[] args) {
    // Java language string comparison operators:
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
    // Java does not support >= or <= operations directly on strings, so we must use the compareTo()
    // function.
    if (c.compareTo(d) >= 0) {
      System.out.println(c + " is lexically bytewise greater than or equal to " + d);
    }
    if (c.compareTo(d) <= 0) {
      System.out.println(c + " is lexically bytewise less than or equal to " + d);
    }

    // Java is strongly typed and will not directly compare a value of String type to a value of
    // numeric type.
    if (c.equalsIgnoreCase(d)) {
      System.out.println(
          c + " equal to " + d + " when interpreted as Unicode simple case folding rules.");
    } else {
      System.out.println(
          c + " not equal to " + d + " when interpreted as Unicode simple case folding rules.");
    }
  }
}
