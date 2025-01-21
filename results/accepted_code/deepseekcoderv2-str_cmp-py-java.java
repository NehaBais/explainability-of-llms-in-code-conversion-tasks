public class StringComparison {
  public static void compare(String a, String b) {
    System.out.println(
        "%s is of type %s and %s is of type %s"
            .formatted(a, a.getClass().getName(), b, b.getClass().getName()));

    if (a.equals(b)) {
      System.out.println(String.format("%s is equal to %s", a, b));
    } else {
      System.out.println(String.format("%s is not equal to %s", a, b));
    }

    if (a.compareTo(b) < 0) {
      System.out.println(String.format("%s is strictly less than %s", a, b));
    }
    if (a.compareTo(b) <= 0) {
      System.out.println(String.format("%s is less than or equal to %s", a, b));
    }
    if (a.compareTo(b) > 0) {
      System.out.println(String.format("%s is strictly greater than %s", a, b));
    }
    if (a.compareTo(b) >= 0) {
      System.out.println(String.format("%s is greater than or equal to %s", a, b));
    }

    // Case insensitive comparison
    if (a.equalsIgnoreCase(b)) {
      System.out.println(String.format("%s is case-insensitive equal to %s", a, b));
    } else {
      System.out.println(String.format("%s is not case-insensitive equal to %s", a, b));
    }

    // Numeric strings comparison
    try {
      int numA = Integer.parseInt(a);
      int numB = Integer.parseInt(b);

      if (numA < numB) {
        System.out.println(String.format("%s is strictly less than %s", a, b));
      }
      if (numA <= numB) {
        System.out.println(String.format("%s is less than or equal to %s", a, b));
      }
      if (numA > numB) {
        System.out.println(String.format("%s is strictly greater than %s", a, b));
      }
      if (numA >= numB) {
        System.out.println(String.format("%s is greater than or equal to %s", a, b));
      }
    } catch (NumberFormatException e) {
      // Handle the exception for non-numeric strings
      System.out.println("One of the inputs is not a numeric string.");
    }
  }

  public static void main(String[] args) {
    compare("YUP", "YUP");
    compare("BALL", "BELL");
    compare("24", "123");
    // Uncomment the following line to test with non-string types
    // compare(24, 123);
    compare(5.0, 5);
  }
}
