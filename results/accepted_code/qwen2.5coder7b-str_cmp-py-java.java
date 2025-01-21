public class Main {
  public static void main(String[] args) {
    compare("YUP", "YUP");
    compare("BALL", "BELL");
    compare("24", "123");
    compare(24, 123);
    compare(5.0, 5);
  }

  public static <T> void compare(T a, T b) {
    System.out.printf(
        "%s is of type %s and %s is of type %s%n",
        a, a.getClass().getName(), b, b.getClass().getName());

    if (a instanceof String && b instanceof String) {
      // Lexical comparison
      int result = ((String) a).compareTo((String) b);
      System.out.printf(
          "%s is %s than %s%n", result < 0 ? "less" : (result > 0 ? "greater" : "equal"), a, b);

      // Case insensitive comparison using equalsIgnoreCase
      if (((String) a).equalsIgnoreCase((String) b)) {
        System.out.printf("%s is equal to %s irrespective of case%n", a, b);
      }
    }

    // Exact equality check (for all types)
    if (a.equals(b)) {
      System.out.printf("%s is equal to %s%n", a, b);
    }

    // Inequality check
    if (!a.equals(b)) {
      System.out.printf("%s is not equal to %s%n", a, b);
    }

    // Object identity checks
    if (a == b) {
      System.out.printf("%s has object identity with %s%n", a, b);
    } else {
      System.out.printf("%s does not have object identity with %s%n", a, b);
    }
  }
}
