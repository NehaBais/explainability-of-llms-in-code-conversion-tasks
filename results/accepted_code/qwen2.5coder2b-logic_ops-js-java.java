public class Logic {
  public static void main(String[] args) {
    logic(true, true);
    logic(false, false);
    logic(true, false);
    logic(false, true);
  }

  public static void logic(boolean a, boolean b) {
    System.out.println("a AND b: " + (a && b));
    System.out.println("a OR b: " + (a || b));
    System.out.println("NOT a: " + (!a));
  }
}
