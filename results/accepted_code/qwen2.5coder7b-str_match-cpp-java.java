public class Main {
  public static void main(String[] args) {
    String s1 = "abcd";
    String s2 = "abab";
    String s3 = "ab";

    // Beginning
    boolean startsWith = s1.startsWith(s3);
    System.out.println("Does s1 start with s3? " + startsWith);

    // End
    boolean endsWith = s1.endsWith(s3);
    System.out.println("Does s1 end with s3? " + endsWith);

    // Anywhere
    int indexOf = s2.indexOf(s3);
    if (indexOf != -1) {
      System.out.println("Does s2 contain s3 anywhere? Yes, at index: " + indexOf);
    } else {
      System.out.println("s2 does not contain s3.");
    }

    // Handle multiple occurrences of a string for part 2
    while ((indexOf = s2.indexOf(s3, indexOf + 1)) != -1) {
      System.out.println("Found another occurrence of s3 at index: " + indexOf);
    }
  }
}
