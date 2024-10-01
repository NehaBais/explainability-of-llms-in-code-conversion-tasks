public class Main {
  static String str1 = "abcd";
  static String str2 = "ab";

  public static void main(String[] args) {
    System.out.println(startsWith(str1, str2)); // True
    System.out.println(containsAtAnyLocation(str1, str2)); // False
    System.out.println(endsWith(str1, str2)); // False
  }

  public static boolean startsWith(String s1, String s2) {
    return s1.startsWith(s2);
  }

  public static boolean containsAtAnyLocation(String s1, String s2) {
    int index = s1.indexOf(s2);
    if (index == -1) return false; // Not found

    System.out.println("Location of match: " + index);

    // Handle multiple occurrences
    while ((index = s1.indexOf(s2, index + 1)) != -1) {
      System.out.println("Location of match: " + index);
    }
    return true;
  }

  public static boolean endsWith(String s1, String s2) {
    return s1.endsWith(s2);
  }
}
