public class Main {

  public static void printMatch(int possibleMatch) {
    switch (possibleMatch) {
      case -1:
        System.out.println("Did not find any matches");
        break;
      default:
        System.out.println("Found match at pos " + possibleMatch);
        break;
    }
  }

  public static void main(String[] args) {
    String s1 = "abcd";
    String s2 = "abab";
    String s3 = "ab";

    // Determining if the first string starts with second string
    assert (s1.startsWith(s3));

    // Determining if the first string contains the second string at any location
    assert (s1.contains(s3));

    // Print the location of the match
    System.out.println("Found match at pos " + s1.indexOf(s3)); // Found match at pos 0
    printMatch(s1.indexOf(s2)); // Did not find any matches

    // Determining if the first string ends with the second string
    assert (s2.endsWith(s3));
  }
}
