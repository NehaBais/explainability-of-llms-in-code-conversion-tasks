public class Main {
  static String s1 = "abcd";
  static String s2 = "abab";
  static String s3 = "ab";

  public static void main(String[] args) {
    // Beginning
    System.out.println(s1.startsWith(s3));
    // End
    System.out.println(s1.endsWith(s3));
    // Anywhere
    int loc = s2.indexOf(s3);
    while (loc != -1) {
      System.out.print(" " + loc);
      loc = s2.indexOf(s3, loc + 1);
    }
  }
}
