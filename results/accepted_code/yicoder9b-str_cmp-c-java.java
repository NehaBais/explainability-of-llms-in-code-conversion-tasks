public class Main {
  public static void main(String[] args) {
    for (int i = 0; i < args.length - 1; i += 2) {
      compareStrings(args[i], args[i + 1]);
      System.out.println();
    }
  }

  public static void compareStrings(String a, String b) {
    // Comparing two strings for exact equality
    boolean eq = a.equals(b);

    // Comparing two strings for inequality
    boolean ne = !eq;

    // Comparing two strings to see if one is lexically ordered before than the other
    boolean lt = a.compareTo(b) < 0;

    // Comparing two strings to see if one is lexically ordered after than the other
    boolean gt = b.compareTo(a) < 0;

    // Comparing two strings for case insensitive equality and inequality
    boolean ceq = a.equalsIgnoreCase(b);
    boolean cne = !ceq;

    System.out.println("String A: " + a + ", String B: " + b);
    System.out.println("Exact equality : " + eq);
    System.out.println("Inexact equality: " + ne);
    System.out.println("A is lexically ordered before B: " + lt);
    System.out.println("B is lexically ordered before A: " + gt);
    System.out.println("Case insensitive equality : " + ceq);
    System.out.println("Case insensitive inequality: " + cne);
  }
}
