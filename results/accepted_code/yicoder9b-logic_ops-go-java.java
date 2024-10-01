public class Main {
  public static void main(String[] args) {
    printLogic(true, true);
  }

  static void printLogic(boolean a, boolean b) {
    System.out.println("a and b is " + (a && b));
    System.out.println("a or b is " + (a || b));
    System.out.println("not a is " + !a);
  }
}
