public class Main {

  static String s1 = "abcd";
  static String s2 = "abab";
  static String s3 = "ab";

  // Beginning
  static boolean startWith = s1.startsWith(s2);
  // End

  // Anywhere
  static int indexOf = s1.indexOf(s2);

  // Contains
  static boolean contains = s1.contains(s2);

  // Ends with
  static boolean endsWith = s1.endsWith(s3);

  public static void main(String[] args) {
    System.out.println("Starts with: " + startWith);
    System.out.println("Index of: " + indexOf);
    System.out.println("Contains: " + contains);
    System.out.println("Ends with: " + endsWith);
  }
}
