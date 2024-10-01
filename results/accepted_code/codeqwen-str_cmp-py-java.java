public class Main {
  public static void main(String[] args) {
    compare("YUP", "YUP");
    compare("BALL", "BELL");
    compare("24", "123");
    compare(24, 123);
    compare(5.0, 5);
  }

  public static void compare(Object A, Object B) {
    System.out.println(
        "\n\""
            + A
            + "\" is of type \""
            + A.getClass().getName()
            + "\" and \""
            + B
            + "\" Is of type \""
            + B.getClass().getName()
            + "\"");

    if (A instanceof String && B instanceof String) {
      String a = (String) A;
      String b = (String) B;
      System.out.println(
          "Case sensitive: "
                  + A
                  + " is lexicographically less than \""
                  + B
                  + "\" : "
                  + A.compareTo(B)
              < 0);
      System.out.println(
          "Case insensitive: "
                  + A
                  + " is lexicographically less than (ignoring case) \""
                  + B
                  + "\" : "
                  + A.toLowerCase().compareTo(b.toLowerCase())
              < 0);
      System.out.println(
          "Case sensitive: "
                  + A
                  + " is lexicographically greater than \""
                  + B
                  + "\" : "
                  + A.compareTo(B)
              > 0);
      System.out.println(
          "Case insensitive: "
                  + A
                  + " is lexicographically greater than (ignoring case) \""
                  + B
                  + "\" : "
                  + A.toLowerCase().compareTo(b.toLowerCase())
              > 0);
      System.out.println(
          "Case sensitive: " + A + " is lexicographically equal to \"" + B + "\" : " + A.equals(B));
    } else if (A instanceof Number && B instanceof Number) {
      Number a = (Number) A;
      Number b = (Number) B;
      System.out.println(A + " is less than " + B + " : " + a.doubleValue() < b.doubleValue());
      System.out.println(A + " is greater than " + B + " : " + A.doubleValue() > b.doubleValue());
      System.out.println(A + " is equal to " + B + " : " + A.equals(B));
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
