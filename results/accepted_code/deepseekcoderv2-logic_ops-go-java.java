public class LogicalOperations {
  public static void printLogic(boolean a, boolean b) {
    System.out.println("a and b is " + (a && b));
    System.out.println("a or b is " + (a || b));
    System.out.println("not a is " + !a);
  }

  public static void main(String[] args) {
    printLogic(true, true);
    printLogic(true, false);
    printLogic(false, true);
    printLogic(false, false);
  }
}
