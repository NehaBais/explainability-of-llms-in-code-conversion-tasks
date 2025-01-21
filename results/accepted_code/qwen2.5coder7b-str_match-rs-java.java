public class Main {
  public static void printMatch(Integer possible_match) {
    if (possible_match != null) System.out.println("Found match at pos " + possible_match);
    else System.out.println("Did not find any matches");
  }

  public static void main(String[] args) {
    String s1 = "abcd";
    String s2 = "abab";
    String s3 = "ab";

    // Determining if the first string starts with second string
    boolean startsWith = s1.startsWith(s3);
    System.out.println("Does s1 start with s3? " + startsWith);

    // Determining if the first string contains the second string at any location
    boolean contains = s1.contains(s3);
    System.out.println("Does s1 contain s3? " + contains);

    // Find all occurrences of the second string in the first string and print their locations.
    int index = s1.indexOf(s3);

    while (index != -1) {
      printMatch(index);
      index = s1.indexOf(s3, index + 1);
    }

    if (!contains) printMatch(null);

    // Determining if the first string ends with the second string
    boolean endsWith = s2.endsWith(s3);
    System.out.println("Does s2 end with s3? " + endsWith);
  }
}
