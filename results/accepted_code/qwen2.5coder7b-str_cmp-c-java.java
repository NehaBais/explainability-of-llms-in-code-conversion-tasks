public class Main {

  public static boolean streq(String a, String b) {
    return a.equals(b);
  }

  public static boolean strne(String a, String b) {
    return !streq(a, b);
  }

  public static boolean strlt(String a, String b) {
    return a.compareTo(b) < 0;
  }

  public static boolean strle(String a, String b) {
    return a.compareTo(b) <= 0;
  }

  public static boolean strgt(String a, String b) {
    return strlt(b, a);
  }

  public static boolean strge(String a, String b) {
    return strle(b, a);
  }

  public static boolean strceq(String a, String b) {
    return a.equalsIgnoreCase(b);
  }

  public static boolean strcne(String a, String b) {
    return !strceq(a, b);
  }

  public static boolean strclt(String a, String b) {
    return a.compareToIgnoreCase(b) < 0;
  }

  public static boolean strcle(String a, String b) {
    return a.compareToIgnoreCase(b) <= 0;
  }

  public static boolean strcgte(String a, String b) {
    return strclt(b, a);
  }

  public static boolean strcge(String a, String b) {
    return strcle(b, a);
  }

  public static void compare(String a, String b) {
    System.out.printf(
        "%s%2d%2d%2d%2d%2d%2d %s%n",
        a, streq(a, b), strne(a, b), strgt(a, b), strlt(a, b), strge(a, b), strle(a, b), b);
  }

  public static void comparecase(String a, String b) {
    System.out.printf(
        "%s%2d%2d%2d%2d%2d%2d %s ignoring case%n",
        a, strceq(a, b), strcne(a, b), strcgte(a, b), strclt(a, b), strcge(a, b), strcle(a, b), b);
  }

  public static void main(String[] args) {
    System.out.println("	eq , ne , gt , lt , ge , le");
    for (int i = 0; i < args.length - 1; i += 2) {
      compare(args[i], args[i + 1]);
      comparecase(args[i], args[i + 1]);
    }
  }
}
