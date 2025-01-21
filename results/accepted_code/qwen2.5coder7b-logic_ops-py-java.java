public class Main {
  public static void main(String[] args) {
    logic(true, false);
    logic(false, true);
    logic(true, true);
    logic(false, false);
  }

  public static void logic(boolean a, boolean b) {
    System.out.println("a and b: " + (a && b));
    System.out.println("a or b: " + (a || b));
    System.out.println("not a: " + (!a));
  }
}
