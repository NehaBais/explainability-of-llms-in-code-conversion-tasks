public class BooleanOps {

  public static void booleanOperations(boolean a, boolean b) {
    System.out.println(a + " and " + b + " -> " + (a && b));
    System.out.println(a + " or " + b + " -> " + (a || b));
    System.out.println(a + " xor " + b + " -> " + (a ^ b));
    System.out.println("not " + a + " -> " + !a);
  }

  public static void main(String[] args) {
    booleanOperations(true, true);
    booleanOperations(true, false);
    booleanOperations(false, true);
    booleanOperations(false, false);
  }
}
