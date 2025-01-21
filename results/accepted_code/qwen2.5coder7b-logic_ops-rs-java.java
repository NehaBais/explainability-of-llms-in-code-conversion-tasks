public class Main {
  public static void booleanOps(boolean a, boolean b) {
    System.out.println(a + " and " + b + " -> " + (a && b));
    System.out.println(a + " or " + b + " -> " + (a || b));
    System.out.println(
        a + " xor " + b + " -> "
            + (a
                ^ b)); // XOR in Java is not a built-in operator, so it's replaced with the
                       // condition below
    System.out.println("not " + a + " -> " + !a);
  }

  public static void main(String[] args) {
    booleanOps(true, true);
    booleanOps(true, false);
    booleanOps(false, true);
    booleanOps(false, false);
  }
}
