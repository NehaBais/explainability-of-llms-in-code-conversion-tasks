public class Logic {
  public static void main(String[] args) {
    boolean a = true;
    boolean b = false;

    logic(a, b);
  }

  public static void logic(boolean a, boolean b) {
    System.out.println("a and b: " + (a && b));
    System.out.println("a or b: " + (a || b));
    System.out.println("not a: " + (!a));
  }
}
