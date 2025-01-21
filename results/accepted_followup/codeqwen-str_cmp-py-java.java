public class Main {
  public static void main(String[] args) {
    compare("YUP", "YUP");
    compare("BALL", "BELL");
    compare("24", "123");
    compare(24, 123);
    compare(5.0, 5);
  }

  public static void compare(Object A, Object B) {
    if (A instanceof String && B instanceof String) {
      String a = (String) A;
      String B = (String) B;
      System.out.println(
          "Case Sensitive: " + A + " is less than " + B + " : " + A.compareTo(B) < 0);
      System.out.println(
          "Case Insensitive: "
                  + A
                  + " Is less than "
                  + B
                  + " : "
                  + A.toLowerCase().compareTo(B.toLowerCase())
              < 0);
    } else if (A instanceof Number && B instanceof Number) {
      Number a = (Number) A;
      Number b = (Number) B;
      System.out.println(
          "Numeric: " + A + " is less than " + B + " : " + a.doubleValue() < b.doubleValue());
    } else {
      System.out.println("Unsupported types");
    }

    if (A == B) {
      System.out.println(A + " has object identity with " + B);
    } else if (A != B) {
      System.out.println(A + " has negated object identity with " + B);
    }
  }
}
