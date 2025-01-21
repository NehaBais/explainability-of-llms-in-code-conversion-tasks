public class Main {
  public static void main(String[] args) {
    String s1 = "abcd";
    String s2 = "abab";
    String s3 = "ab";

    // Determining if the first string starts with second string
    System.out.println(s1.startsWith(s3)); // prints true
    // Determining if the first string contains the second string at any location
    System.out.println(s1.contains(s3)); // prints true
    // Print the location of the match
    int index = s1.indexOf(s3);
    if (index != -1) {
      System.out.println("Found match at pos " + index);
    } else {
      System.out.println("Did not find any matches");
    }
    // Determining if the first string ends with the second string
    System.out.println(s2.endsWith(s3)); // prints true
  }
}
