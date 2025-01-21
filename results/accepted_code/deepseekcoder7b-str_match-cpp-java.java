public class Main {
  public static void main(String[] args) {
    String s1 = "abcd";
    String s2 = "abab";
    String s3 = "ab";

    // Beginning
    boolean startsWithS3 = s1.startsWith(s3);
    System.out.println("Does s1 start with s3? " + startsWithS3);

    // End
    boolean endsWithS3 = s1.endsWith(s3);
    System.out.println("Does s1 end with s3? " + endsWithS3);

    // Anywhere - First occurrence
    int indexOfS2InS1 = s1.indexOf(s2);
    if (indexOfS2InS1 != -1) { // If string is not found, indexOf returns -1
      System.out.println(
          "Does s1 contain s2 at any location? Yes. First occurrence starts at position "
              + indexOfS2InS1);
    } else {
      System.out.println("Does s1 contain s2 at any location? No");
    }

    // Anywhere - Multiple occurrences
    int nextIndex = indexOfS2InS1 + 1;
    while (nextIndex != -1) {
      System.out.println("Next occurrence of s3 in s2 starts at position " + nextIndex);
      nextIndex =
          s1.indexOf(s2, nextIndex + 1); // find the next occurrence starting from current index + 1
    }
  }
}
