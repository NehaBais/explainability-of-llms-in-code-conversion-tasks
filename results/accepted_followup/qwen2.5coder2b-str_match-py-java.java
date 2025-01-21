public class Main {
  public static void main(String[] args) {
    // String matching
    System.out.println("abcd".startsWith("ab")); // returns true
    System.out.println("abcd".endsWith("zn")); // returns false
    System.out.println("bb".contains("ab")); // returns False
    System.out.println("ab".contains("ab")); // returns True

    // Optional requirements
    int loc = "abab".indexOf("bb"); // returns -1
    loc = "abab".indexOf("ab"); // returns 0
    loc = "abab".indexOf("ab", loc + 1); // returns 2

    System.out.println(loc);
  }
}
