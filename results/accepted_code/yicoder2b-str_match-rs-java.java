public class Main {
  public static void main(String[] args) {
    String s1 = "abcd";
    String s2 = "abab";
    String s3 = "ab";

    // Determining if the first string starts with second string
    assertTrue(s1.startsWith(s3));
    // Determining if the first string contains the second string at any location
    assertTrue(s2.contains(s3));
    // Determine the position of a match and print it
    int pos = s1.indexOf(s3);
    if (pos != -1) {
      System.out.println("Found match at pos " + pos);
    } else {
      System.out.println("Did not find any matches");
    }
    // Determining if the first string ends with the second string
    assertTrue(s2.endsWith(s3));
  }
}
