class Main {
  public static void main(String[] args) {
    compare("ball", "bell");
    comparecase("Ball", "Bell");
    compare("YUP", "yEP");
    comparecase("Yup", "YelP");
  }

  static void compare(String a, String b) {
    System.out.printf(
        "%s %2d %2d %2d %2d %2d %2d\n",
        a,
        areEqual(a, b),
        notEqual(a, b),
        greaterThan(a, b),
        lessThan(a, b),
        greaterOrEqual(a, b),
        lessOrEqual(a, b));
    System.out.printf(
        "%s %2d %2d %2d %2d %2d %2d\n",
        b,
        areEqualCaseInsensitive(a, b),
        notEqualCaseInsensitive(a, b),
        greaterThanCaseInsensitive(a, b),
        lessThanCaseInsensitive(a, b),
        greaterOrEqualCaseInsensitive(a, b),
        lessOrEqualCaseInsensitive(a, b));
  }

  static void comparecase(String a, String b) {
    System.out.printf(
        "%s %2d %2d %2d %2d %2d %2d\n",
        a,
        areEqualCaseInsensitive(a, b),
        notEqualCaseInsensitive(a, b),
        greaterThanCaseInsensitive(a, b),
        lessThanCaseInsensitive(a, b),
        greaterOrEqualCaseInsensitive(a, b),
        lessOrEqualCaseInsensitive(a, b));
    System.out.printf(
        "%s %2d %2d %2d %2d %2d %2d\n",
        b,
        areEqualCaseInsensitive(a, b),
        notEqualCaseInsensitive(a, b),
        greaterThanCaseInsensitive(a, b),
        lessThanCaseInsensitive(a, b),
        greaterOrEqualCaseInsensitive(a, b),
        lessOrEqualCaseInsensitive(a, b));
  }

  static int areEqual(String a, String b) {
    return a.equals(b) ? 1 : 0;
  }

  static int notEqual(String a, String b) {
    return !areEqual(a, b) ? 1 : 0;
  }

  static int greaterThan(String a, String b) {
    return a.compareTo(b) > 0 ? 1 : 0;
  }

  static int lessThan(String a, String b) {
    return a.compareTo(b) < 0 ? 1 : 0;
  }

  static int greaterOrEqual(String a, String b) {
    return a.compareTo(b) >= 0 ? 1 : 0;
  }

  static int lessOrEqual(String a, String b) {
    return a.compareTo(b) <= 0 ? 1 : 0;
  }

  static int areEqualCaseInsensitive(String a, String b) {
    return a.equalsIgnoreCase(b) ? 1 : 0;
  }

  static int notEqualCaseInsensitive(String a, String b) {
    return !areEqualCaseInsensitive(a, b) ? 1 : 0;
  }

  static int greaterThanCaseInsensitive(String a, String b) {
    return a.compareToIgnoreCase(b) > 0 ? 1 : 0;
  }

  static int lessThanCaseInsensitive(String a, String b) {
    return a.compareToIgnoreCase(b) < 0 ? 1 : 0;
  }

  static int greaterOrEqualCaseInsensitive(String a, String b) {
    return a.compareToIgnoreCase(b) >= 0 ? 1 : 0;
  }

  static int lessOrEqualCaseInsensitive(String a, String b) {
    return a.compareToIgnoreCase(b) <= 0 ? 1 : 0;
  }
}
