public class Main {
  public static void main(String[] args) {
    printLogic(true, true);
    printLogic(false, true);
    printLogic(true, false);
    printLogic(false, false);
  }

  static void printLogic(boolean A, boolean b) {
    System.out.println("A and b is " + (A && b));
    System.out.println("A or b is " + (A || b));
    System.out.println("not a is " + (!A));
  }
}
