public class Main {
  public static void compare(Object a, Object b) {
    System.out.println(
        "'"
            + a
            + "' is of type "
            + a.getClass().getName()
            + " and '"
            + b
            + "' is of type "
            + b.getClass().getName());

    if (a instanceof String && b instanceof String) {
      String strA = (String) a;
      String strB = (String) b;

      System.out.println(
          "'" + strA + "' is lexically less than '" + strB + "': " + (strA.compareTo(strB) < 0));
      System.out.println(
          "'" + strA + "' is lexically greater than '" + strB + "': " + (strA.compareTo(strB) > 0));
      System.out.println("'" + strA + "' is equal to '" + strB + "': " + (strA.equals(strB)));

      // Case sensitive comparison
      System.out.println("Case Sensitive Comparisons:");
      System.out.println(
          "'"
              + strA
              + "' is lexically less than '"
              + strB
              + "': "
              + (strA.compareToIgnoreCase(strB) < 0));
      System.out.println(
          "'"
              + strA
              + "' is lexically greater than '"
              + strB
              + "': "
              + (strA.compareToIgnoreCase(strB) > 0));
    }
  }

  public static void main(String[] args) {
    compare("YUP", "YUP");
    compare("BALL", "BELL");
    compare("24", "123");
    // compare(24, 123); Uncommenting this will cause compile error
    compare(5.0, 5);
  }
}
