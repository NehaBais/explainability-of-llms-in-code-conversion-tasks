public class Main {
  public static void main(String[] args) {
    System.out.println("abcd".startsWith("ab")); // returns True
    System.out.println("abcd".endsWith("zn")); // returns False
    System.out.println("abab".contains("bb")); // returns False
    System.out.println("abab".contains("ab")); // returns True

    int loc = "abab".indexOf("bb"); // returns -1
    loc = "abab".indexOf("ab"); // returns 0
    loc = "abab".indexOf("ab", loc + 1); // returns 2
  }
}
