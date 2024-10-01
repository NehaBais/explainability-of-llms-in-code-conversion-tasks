public class StringMatching {
  public static void printMatch(Integer possibleMatch) {
    if (possibleMatch != null) {
      System.out.println("Found match at pos " + possibleMatch);
    } else {
      System.out.println("Did not find any matches");
    }
  }

  public static void main(String[] args) {
    String s1 = "abcd";
    String s2 = "abab";
    String s3 = "ab";

    // Determining if the first string starts with second string
    boolean startsWithResult = s1.startsWith(s3);
    System.out.println(" determination result: " + startsWithResult);

    // Determining if the first string contains the second string at any location
    boolean containsResult = s1.contains(s3);
    System.out.println(" containment result: " + containsResult);

    // Print the location of the match for containment
    Integer containmentMatchPos = s1.indexOf(s3);
    printMatch(containmentMatchPos); // Found match at pos 0

    // Determining if the first string ends with the second string
    boolean endsWithResult = s2.endsWith(s3);
    System.out.println(" end result: " + endsWithResult);
  }
}
