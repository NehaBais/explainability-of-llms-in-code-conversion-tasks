import java.util.*;

public class StringComparison {
  static boolean eq(String a, String b) {
    return a.equals(b);
  }

  static boolean ne(String a, String b) {
    return !a.equals(b);
  }

  static boolean gt(String a, String b) {
    return a.compareTo(b) > 0;
  }

  static boolean lt(String a, String b) {
    return a.compareTo(b) < 0;
  }

  static boolean ge(String a, String b) {
    return a.compareTo(b) >= 0;
  }

  static boolean le(String a, String b) {
    return a.compareTo(b) <= 0;
  }

  static boolean ceq(String a, String b) {
    return a.compareToIgnoreCase(b) == 0;
  }

  static boolean cne(String a, String b) {
    return !a.equalsIgnoreCase(b);
  }

  static boolean cgt(String a, String b) {
    return a.compareToIgnoreCase(b) > 0;
  }

  static boolean clt(String a, String b) {
    return a.compareToIgnoreCase(b) < 0;
  }

  static boolean cge(String a, String b) {
    return a.compareToIgnoreCase(b) >= 0;
  }

  static boolean cle(String a, String b) {
    return a.compareToIgnoreCase(b) <= 0;
  }

  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    while (sc.hasNext()) {
      String a = sc.next();
      String b = sc.next();
      System.out.println(
          a + " " + ceq(a, b) + " " + cne(a, b) + " " + clt(a, b) + " " + cle(a, b) + " "
              + cgt(a, b) + " " + cge(a, b));
    }
  }
}
