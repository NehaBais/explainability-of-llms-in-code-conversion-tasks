public class Main {
  public static void main(String[] args) {
    String s1 = "abcd";
    String s2 = "abab";
    String s3 = "ab";
    // Beginning
    if (s1.startsWith(s3)) System.out.println("Starts with");
    // End
    if (s1.endsWith(s3)) System.out.println("Ends with");
    // Anywhere
    int loc = s1.indexOf(s2);
    while (loc != -1) {
      System.out.println("Found at location: " + loc);
      loc = s1.indexOf(s3, loc + 1);
    }
  }
}
