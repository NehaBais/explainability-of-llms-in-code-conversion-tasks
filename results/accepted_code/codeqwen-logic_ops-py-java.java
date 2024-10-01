public class Logic {
  public static void main(String[] args) {
    logic(true, false);
  }

  public static void logic(boolean A, boolean B) {
    System.out.println("A and B: " + (A && B));
    System.out.println("A or B: " + (A || B));
    System.out.println("Not A: " + !A);
  }
}
