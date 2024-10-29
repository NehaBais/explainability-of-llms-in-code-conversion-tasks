public class Main {

  public static void main(String[] args) {
    booleanOperations(true, true);
    booleanOperations(true, false);
    booleanOperations(false, true);
    booleanOperations(false, false);
  }

  private static void booleanOperations(boolean a, boolean b) {
    System.out.println(a + " and " + b + " -> " + (a && b));
    System.out.println(a + " or " + b + " -> " + (a || b));
    System.out.println("xor of " + a + " and " + b + " -> " + xorOp(a, b));
    System.out.println("not of " + a + " -> " + (!a));
  }

  private static boolean xorOp(boolean a, boolean b) {
    return (a || b) && !(a && b);
  }
}
