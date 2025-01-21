public class Logic {
  public static void main(String[] args) {
    logic(true, true); // Example usage
    logic(true, false); // Example usage
    logic(false, true); // Example usage
    logic(false, false); // Example usage
  }

  public static void logic(boolean a, boolean b) {
    System.out.println("a AND b: " + (a && b));
    System.out.println("a OR b: " + (a || b));
    System.out.println("NOT a: " + (!a));
  }
}
