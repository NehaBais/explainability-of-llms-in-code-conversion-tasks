public class Main {

  public static void main(String[] args) {
    System.out.println("eq , ne , gt , lt , ge , le");

    String a = "ball";
    String b = "bell";

    compare(a, b);
    comparecase(a, b);

    a = "ball";
    b = "ball";

    compare(a, b);
    comparecase(a, b);

    a = "YUP";
    b = "YEP";

    compare(a, b);
    comparecase(a, b);

    a = "ball";
    b = "BELL";

    compare(a, b);
    comparecase(a, b);

    a = "ball";
    b = "BALL";

    compare(a, b);
    comparecase(a, b);

    a = "YUP";
    b = "yep";

    compare(a, b);
    comparecase(a, b);
  }

  static void compare(String a, String b) {
    System.out.printf(
        "%s %b %b %b %b %b %b %s\n",
        a,
        a.equals(b),
        !a.equals(b),
        a.compareTo(b) > 0,
        a.compareTo(b) < 0,
        a.compareTo(b) >= 0,
        a.compareTo(b) <= 0,
        b);
  }

  static void comparecase(String a, String b) {
    System.out.printf(
        "%s %b %b %b %b %b %b %s ignoring case\n",
        a,
        a.equalsIgnoreCase(b),
        !a.equalsIgnoreCase(b),
        a.compareToIgnoreCase(b) > 0,
        a.compareToIgnoreCase(b) < 0,
        a.compareToIgnoreCase(b) >= 0,
        a.compareToIgnoreCase(b) <= 0,
        b);
  }
}
