public class CompareStrings {
  public static void main(String[] args) {
    compare("YUP", "YUP");
    compare("BALL", "BELL");
    compare("24", "123");
    compare(24, 123);
    compare(5.0, 5);
  }

  public static void compare(String a, String b) {
    System.out.printf("%s is of type %s and %s is of type %n", a, a.getClass(), b, b.getClass());
    if (a.compareTo(b) < 0) {
      System.out.println(a + " is strictly less than " + b);
    } else if (a.compareTo(b) == 0) {
      System.out.println(a + " is equal to " + b);
    } else {
      System.out.println(a + " is strictly greater than " + b);
    }
  }

  public static void compare(int a, int b) {
    compare(String.valueOf(a), String.valueOf(b));
  }

  public static void compare(double a, double b) {
    if (a == b) {
      System.out.println(a + " is equal to " + b);
      return;
    }
    if (a < b) {
      System.out.println(a + " is strictly less than " + b);
      return;
    }
    System.out.println(a + " is strictly greater than " + b);
  }
}
