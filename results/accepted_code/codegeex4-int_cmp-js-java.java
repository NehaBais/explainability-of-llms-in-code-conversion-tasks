public class Main {
  public static void main(String[] args) {
    // Input numbers
    int a = 5;
    int b = 10;

    compare(a, b);
  }

  private static void compare(int a, int b) {
    if (a == b) {
      System.out.println(a + " equals " + b);
    }
    if (a < b) {
      System.out.println(a + " is less than " + b);
    }
    if (a > b) {
      System.out.println(a + " is greater than " + b);
    }
  }
}
