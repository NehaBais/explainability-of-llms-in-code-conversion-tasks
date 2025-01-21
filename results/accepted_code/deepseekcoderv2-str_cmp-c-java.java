import java.util.Scanner;

public class StringComparison {
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);

    System.out.println("	eq , ne , gt , lt , ge , le");
    for (int i = 0; i < args.length; i += 2) {
      String a = args[i];
      String b = args[i + 1];

      compare(a, b);
      compareCaseInsensitive(a, b);
    }
  }

  public static void compare(String a, String b) {
    System.out.printf(
        "%s %2d%2d%2d%2d%2d%2d %s%n",
        a,
        equals(a, b),
        notEquals(a, b),
        greaterThan(a, b),
        lessThan(a, b),
        greaterEqual(a, b),
        lessEqual(a, b),
        b);
  }

  public static void compareCaseInsensitive(String a, String b) {
    System.out.printf(
        "%s %2d%2d%2d%2d%2d%2d %s ignoring case%n",
        a,
        equalsIgnoreCase(a, b),
        notEqualsIgnoreCase(a, b),
        greaterThanIgnoreCase(a, b),
        lessThanIgnoreCase(a, b),
        greaterEqualIgnoreCase(a, b),
        lessEqualIgnoreCase(a, b),
        b);
  }

  public static int equals(String a, String b) {
    return a.equals(b) ? 1 : 0;
  }

  public static int notEquals(String a, String b) {
    return !a.equals(b) ? 1 : 0;
  }

  public static int greaterThan(String a, String b) {
    return a.compareTo(b) > 0 ? 1 : 0;
  }

  public static int lessThan(String a, String b) {
    return a.compareTo(b) < 0 ? 1 : 0;
  }

  public static int greaterEqual(String a, String b) {
    return a.compareTo(b) >= 0 ? 1 : 0;
  }

  public static int lessEqual(String a, String b) {
    return a.compareTo(b) <= 0 ? 1 : 0;
  }

  public static int equalsIgnoreCase(String a, String b) {
    return a.equalsIgnoreCase(b) ? 1 : 0;
  }

  public static int notEqualsIgnoreCase(String a, String b) {
    return !a.equalsIgnoreCase(b) ? 1 : 0;
  }

  public static int greaterThanIgnoreCase(String a, String b) {
    return a.compareToIgnoreCase(b) > 0 ? 1 : 0;
  }

  public static int lessThanIgnoreCase(String a, String b) {
    return a.compareToIgnoreCase(b) < 0 ? 1 : 0;
  }

  public static int greaterEqualIgnoreCase(String a, String b) {
    return a.compareToIgnoreCase(b) >= 0 ? 1 : 0;
  }

  public static int lessEqualIgnoreCase(String a, String b) {
    return a.compareToIgnoreCase(b) <= 0 ? 1 : 0;
  }
}
