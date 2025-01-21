public class Main {
  public static void main(String[] args) {

    String s = "abcdefgh";
    int n = 2;
    int m = 3;
    char char1 = 'd';
    String chars1 = "cd";

    // starting from n=2 characters in and of m=3 in length
    System.out.println(s.substring(n - 1, n + m - 1));

    // starting from n characters in, up to the end of the string
    System.out.println(s.substring(n - 1));

    // whole string minus last character
    System.out.println(s.substring(0, s.length() - 1));

    // starting from a known character char="d" within the string and of m length
    int index1 = s.indexOf(char1);
    if (index1 != -1) {
      System.out.println(s.substring(index1, index1 + m));
    }

    // starting from a known substring chars="cd" within the string and of m length.
    int index2 = s.indexOf(chars1);
    if (index2 != -1) {
      System.out.println(s.substring(index2, index2 + m));
    }
  }
}
