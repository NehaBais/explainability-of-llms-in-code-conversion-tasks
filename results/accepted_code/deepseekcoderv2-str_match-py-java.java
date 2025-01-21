public class StringMatching {
  public static void main(String[] args) {
    // Demonstrating string matching in Java
    String str1 = "abcd";
    String str2 = "ab";
    String str3 = "zn";
    String str4 = "bb";
    String str5 = "abab";

    // 1. Determining if the first string starts with the second string
    boolean startsWith = str1.startsWith(str2);
    System.out.println("Starts with: " + startsWith); // Should print true

    // 2. Determining if the first string contains the second string at any location
    boolean contains = str1.contains(str3);
    System.out.println("Contains: " + contains); // Should print false

    // Optional requirements for part 2:
    int index = -1;
    String searchStr = "ab";
    if (str5.contains(searchStr)) {
      index = str5.indexOf(searchStr);
      System.out.println(
          "First occurrence of '" + searchStr + "' is at index: " + index); // Should print 0
    }
    int nextIndex = -1;
    if (index != -1 && index < str5.length() - searchStr.length()) {
      nextIndex = str5.indexOf(searchStr, index + 1);
      System.out.println(
          "Second occurrence of '" + searchStr + "' is at index: " + nextIndex); // Should print 2
    }

    // 3. Determining if the first string ends with the second string
    boolean endsWith = str1.endsWith(str3);
    System.out.println("Ends with: " + endsWith); // Should print false
  }
}
