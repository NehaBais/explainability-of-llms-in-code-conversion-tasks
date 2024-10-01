public class Main {
  public static void main(String[] args) {
    String s1 = "abcd";
    String s2 = "abab";
    String s3 = "ab";

    // Determining if the first string starts with second string
    System.out.println(s1.startsWith(s3)); // true

    // Determining if the first string contains the second string at any location
    System.out.println(s1.contains(s3)); // true

    printMatch(s1.indexOf(s3)); // Found match at pos 0
    printMatch(s1.indexOf(s2)); // Did not find any matches

    // Determining if the first string ends with the second string
    System.out.println(s2.endsWith(s3)); // false
  }

  public static void printMatch(int possible_match) {
    if (possible_match >= 0) {
      System.out.println("Found match at pos " + possible_match);
    } else {
      System.out.println("Did not find any matches");
    }
  }
}
