public class BooleanOps {
  public static void booleanOps(boolean a, boolean b) {
    System.out.println("" + a + " and " + b + " -> " + (a && b));
    System.out.println("" + a + " or " + b + " -> " + (a || b));
    // In Java, there is no direct XOR operator for boolean values, so we use ! to represent it
    System.out.println("" + a + " xor " + b + " -> " + (!a && b || a && !b));
    System.out.println("not " + a + " -> " + !a);
  }

  public static void main(String[] args) {
    booleanOps(true, true);
    booleanOps(true, false);
    booleanOps(false, true);
    booleanOps(false, false);
  }
}
