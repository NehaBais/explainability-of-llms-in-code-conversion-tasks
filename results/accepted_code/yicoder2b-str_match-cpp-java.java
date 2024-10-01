public class Main {
  public static void main(String[] args) {
    String s1 = "abcd";
    String s2 = "abab";
    String s3 = "ab";
    // Beginning
    System.out.println((s1.substring(0, s3.length()).equals(s3)));
    // End
    System.out.println((s1.substring(s1.length() - s3.length()).equals(s3)));
    // Anywhere
    int loc = s2.indexOf(s3);
    if (loc == -1) {
      System.out.println("String not found!");
    } else {
      System.out.println("Location: " + loc);
      System.out.println("Next location: " + (s2.indexOf(s3, loc + 1)));
    }
  }
}
