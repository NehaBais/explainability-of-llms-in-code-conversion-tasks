public class Main {
  public static void main(String[] args) {
    String s1 = "abcd";
    String s2 = "abab";
    String s3 = "ab";

    // Determining if the first string starts with second string
    assert s1.startsWith(s3);

    // Determining if the first string contains the second string at any location
    assert s1.contains(s3);

    // Print the location of the match
    System.out.println("Found match at pos " + s1.indexOf(s3)); // Found match at pos 0
    System.out.println(
        "Did not find any matches"); // Will not be printed if there is a match, otherwise it will
                                     // print this statement

    // Determining if the first string ends with the second string
    assert s2.endsWith(s3);
  }
}
