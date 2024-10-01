public class Main {
  public static void main(String[] args) {
    String str1 = "abcd";
    String str2 = "abcd";
    String str3 = "123";
    String str4 = "ABCD";
    String str5 = "dcba";
    String str6 = "ABCD".toLowerCase();
    String str7 = "abcd".toLowerCase();

    // Comparing two strings for exact equality
    System.out.println(str1.equals(str2)); // true

    // Comparing two strings for inequality (i.e., the inverse of exact equality)
    System.out.println(!str1.equals(str3)); // true

    // Comparing two strings to see if one is lexically ordered before than the other
    System.out.println(str5.compareTo(str1) < 0); // true

    // Comparing two strings to see if one is lexically ordered after than the other
    System.out.println(str1.compareTo(str3) > 0); // false

    // Case sensitive comparison
    System.out.println(!str4.equals(str3)); // true

    // Case insensitive comparison
    System.out.println(str6.equals(str7)); // true

    // Comparison of numeric strings if these are not treated lexically
    String numStr1 = "123";
    String numStr2 = "456";

    int compareNumStrs = numStr1.compareTo(numStr2);

    if (compareNumStrs < 0) {
      System.out.println("numStr1 is less than numStr2");
    } else if (compareNumStrs > 0) {
      System.out.println("numStr1 is greater than numStr2");
    } else {
      System.out.println("numStr1 is equal to numStr2");
    }
  }
}
