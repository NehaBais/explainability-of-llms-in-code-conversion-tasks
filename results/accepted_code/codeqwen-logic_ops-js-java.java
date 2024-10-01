public class Main {
  public static void main(String[] args) {
    logic(true, false);
  }

  static void logic(boolean A, boolean B) {
    System.out.println("A AND b: " + (A && B));
    System.out.println("A OR b: " + (A || B));
    System.out.println("NOT a: " + (!A));
  }
}
