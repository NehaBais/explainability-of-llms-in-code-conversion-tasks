import java.util.*;

class Main {
  public static void main(String[] args) {
    String a, b;
    System.out.println("	eq  , ne  , gt  , lt  , ge  , le");
    while (args.length > 0) {
      a = args[0];
      b = args[1];
      args = Arrays.copyOfRange(args, 2, args.length);
      compare(a, b);
      comparecase(a, b);
    }
  }

  static void compare(String a, String b) {
    System.out.printf(
        "%s%2d%2d%2d%2d%2d%2d  %s\n",
        a,
        0 == a.compareTo(b),
        1 == a.compareTo(b),
        -1 < a.compareTo(b),
        0 > a.compareTo(b),
        -1 <= a.compareTo(b),
        1 >= a.compareTo(b),
        b);
  }

  static void comparecase(String a, String b) {
    System.out.printf(
        "%s%2d%2d%2d%2d%2d%2d  %s ignoring case\n",
        a,
        0 == a.compareToIgnoreCase(b),
        1 == a.compareToIgnoreCase(b),
        -1 < a.compareToIgnoreCase(b),
        -1 > a.compareToIgnoreCase(b),
        -1 <= a.compareToIgnoreCase(b),
        1 >= a.compareToIgnoreCase(b),
        b);
  }
}
