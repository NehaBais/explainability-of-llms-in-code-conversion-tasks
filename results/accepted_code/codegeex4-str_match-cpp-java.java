public class Main {
  public static void main(String[] args) {
    String s1 = "abcd";
    String s2 = "abab";
    String s3 = "ab";

    // Beginning
    boolean startsWith = s1.startsWith(s3);
    System.out.println("Does " + s1 + " start with " + s3 + ": " + startsWith);

    // End
    boolean endsWith = s1.endsWith(s3);
    System.out.println("Does " + s1 + " end with " + s3 + ": " + endsWith);

    // Anywhere
    int index = s2.indexOf(s3);
    if (index != -1) {
      System.out.println("First occurrence of " + s3 + " in " + s2 + " is at index: " + index);
    } else {
      System.out.println(s3 + " does not occur anywhere in " + s2);
    }

    while (index != -1) {
      index = s2.indexOf(s3, index + 1);
      if (index != -1) {
        System.out.println("Next occurrence of " + s3 + " in " + s2 + " is at index: " + index);
      }
    }
  }
}
