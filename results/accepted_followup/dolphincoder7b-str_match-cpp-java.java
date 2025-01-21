class Main {
  public static void main(String[] args) {
    String s1 = "abcd";
    String s2 = "abab";
    String s3 = "ab";

    // Beginning
    if (s1.length() >= s3.length()) {
      if (s1.substring(0, s3.length()).equals(s3)) {
        System.out.println("First string starts with second string.");
      } else {
        System.out.println("First string doesn't start with second string.");
      }
    }

    // Ending
    if (s1.length() >= s3.length()) {
      if (s1.substring(s1.length() - s3.length()).equals(s3)) {
        System.out.println("First string ends with second string.");
      } else {
        System.out.println("First string doesn't end with second string.");
      }
    }

    // Anywhere
    int loc = s2.indexOf(s3);
    while (loc != -1) {
      System.out.println("Found match at index " + loc);
      loc = s2.indexOf(s3, loc + 1);
    }
  }
}
