public class StringMatching {

  public static void main(String[] args) {

    String s1 = "abcd";
    String s2 = "abab";
    String s3 = "ab";

    // Determining if the first string starts with second string
    boolean startsWith = s1.startsWith(s3);
    System.out.println("Starts with: " + startsWith);

    // Determining if the first string contains the second string at any location
    boolean contains = s1.contains(s2);
    System.out.println("Contains: " + contains);

    // Determining if the first string ends with the second string
    boolean endsWith = s1.endsWith(s3);
    System.out.println("Ends with: " + endsWith);

    // Location of the match for part 2
    int location = s2.indexOf(s3);
    System.out.println("Location of match: " + location);

    // Handling multiple occurrences of a string for part 2
    int count = 0;
    int index = s2.indexOf(s3);
    while (index != -1) {
      count++;
      index = s2.indexOf(s3, index + 1);
    }
    System.out.println("Number of occurrences: " + count);
  }
}
