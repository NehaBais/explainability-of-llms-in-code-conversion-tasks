public class LogicPrinter {
  public static void printLogic(boolean a, boolean b) {
    System.out.println("a and b is " + (a && b));
    System.out.println("a or b is " + (a || b));
    System.out.println("not a is " + (!a));
  }

  public static void main(String[] args) {
    printLogic(true, true); // Example usage
    printLogic(true, false); // Example usage
    printLogic(false, true); // Example usage
    printLogic(false, false); // Example usage
  }
}
