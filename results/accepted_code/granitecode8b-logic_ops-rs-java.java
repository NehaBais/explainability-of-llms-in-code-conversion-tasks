public class BooleanOps {
  public static void main(String[] args) {
    boolean_ops(true, true);
    boolean_ops(true, false);
    boolean_ops(false, true);
    boolean_ops(false, false);
  }

  public static void boolean_ops(boolean a, boolean b) {
    System.out.println(a + " and " + b + " -> " + (a && b));
    System.out.println(a + " or " + b + " -> " + (a || b));
    System.out.println(a + " xor " + b + " -> " + (a ^ b));
    System.out.println("not " + a + " -> " + !a);
  }
}
