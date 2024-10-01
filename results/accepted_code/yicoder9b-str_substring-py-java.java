public class Main {
  static String s = "abcdefgh";
  static int n = 2, m = 3;
  static char c = 'd';
  static String sc = "cd";

  public static void main(String[] args) {
    // starting from n=2 characters in and of m length.
    System.out.println(
        s.substring(
            n - 1, n + m - 1)); // substring method doesn't include the end index hence n+m-1.

    // starting from n characters in, up to the end of the string;
    System.out.println(s.substring(n - 1));

    // whole string minus last character;
    System.out.println(s.substring(0, s.length() - 1)); // Excludes the last character

    // starting from a known character and of m length;
    int indx = s.indexOf(c);
    if (indx >= 0) {
      System.out.println(s.substring(indx, indx + m));
    }

    // starting from a known substring within the string and of m length.
    int indxSubStr = s.indexOf(sc);
    if (indxSubStr >= 0) {
      System.out.println(s.substring(indxSubStr, indxSubStr + m));
    }
  }
}
