public class StringMatching {
  public static void main(String[] args) {
    String s1 = "abcd";
    String s2 = "abab";
    String s3 = "ab";

    // Beginning
    boolean startsWith = s1.startsWith(s3);
    System.out.println("StartsWith: " + startsWith);

    // End
    boolean endsWith = s1.endsWith(s3);
    System.out.println("EndsWith: " + endsWith);

    // Anywhere
    int firstIndex = s2.indexOf(s3);
    if (firstIndex == -1) {
      System.out.println("Contains: false");
    } else {
      System.out.println("Contains: true at index " + firstIndex);

      // Handle multiple occurrences
      int lastIndex = s2.indexOf(s3, firstIndex + 1);
      while (lastIndex != -1) {
        System.out.println("Additional occurrence found at index " + lastIndex);
        lastIndex = s2.indexOf(s3, lastIndex + 1);
      }
    }
  }
}
