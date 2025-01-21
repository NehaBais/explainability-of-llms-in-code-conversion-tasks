public class LogicOperations {
  public static void main(String[] args) {
    // Define the two boolean values
    boolean a = true;
    boolean b = false;

    // Perform operations and print results
    performAnd(a, b);
    performOr(a, b);
    performNot(a);
  }

  private static void performAnd(boolean a, boolean b) {
    System.out.println("a and b: " + (a && b));
  }

  private static void performOr(boolean a, boolean b) {
    System.out.println("a or b: " + (a || b));
  }

  private static void performNot(boolean a) {
    System.out.println("not a: " + !a);
  }
}
