public class Main {
  public static void main(String[] args) {
    String s1 = "abcd";
    String s2 = "abab";
    String s3 = "ab";

    // Determining if the first string starts with second string
    System.out.println(s1.startsWith(s3)); // true
    // Determining if the first string contains the second string at any location
    System.out.println(s1.contains(s3)); // true
    // Print the location of the match
    int pos = s1.indexOf(s3); // pos will be 0 for this case
    if (pos > -1) {
      System.out.printf("Found match at pos %d%n", pos); // Found match at pos 0
    } else {
      System.out.println("Did not find any matches"); // For different cases where no match is found
    }
    pos = s1.indexOf(s2); // In this case pos will be -1, indicating no match
    if (pos > -1) {
      System.out.printf("Found match at pos %d%n", pos); // For matching cases
    } else {
      System.out.println("Did not find any matches"); // For the case where no match is found
    }
    // Determining if the first string ends with the second string
    System.out.println(s2.endsWith(s3)); // true
  }
}
