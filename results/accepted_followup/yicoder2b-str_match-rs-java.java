public class Main {
  public static void main(String[] args) {
    String s1 = "abcd";
    String s2 = "abab";
    String s3 = "ab";

    // Determining if the first string starts with second string
    assertTrue(s1.startsWith(s3));

    if (s1.indexOf(s3) != -1) {
      System.out.println("Found match at pos " + s1.indexOf(s3));
    } else {
      System.out.println("Did not find any matches");
    }

    // Determining if the first string contains the second string at any location
    assertTrue(s2.contains(s3));

    // Determining if the first string ends with the second string
    assertTrue(s2.endsWith(s3));
  }
}
