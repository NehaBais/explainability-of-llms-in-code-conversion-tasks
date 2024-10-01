public class StringMatchingDemo {

  public static void main(String[] args) {
    String s1 = "abcd";
    String s2 = "abab";
    String s3 = "ab";

    // Beginning
    System.out.println("s1.startsWith(s3): " + s1.startsWith(s3));

    // End
    System.out.println("s1.endsWith(s3): " + s1.endsWith(s3));

    // Anywhere
    int index = s2.indexOf(s3);
    if (index != -1) {
      System.out.println("s2 contains s3 at index " + index);
    } else {
      System.out.println("s2 does not contain s3");
    }
  }
}
