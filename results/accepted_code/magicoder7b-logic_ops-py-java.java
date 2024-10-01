public class Main {
  public static void logic(boolean a, boolean b) {
    System.out.println("a and b: " + (a && b));
    System.out.println("a or b: " + (a || b));
    System.out.println("not a: " + !a);
  }

  public static void main(String[] args) {
    logic(true, false); // Test the function with some arguments
  }
}
