public class Main {
  public static void main(String[] args) {
    String s = "abcdefgh";
    int n = 2, m = 3, charCode = (int) 'd', charsCode = (int) "cd".charAt(0);
    // starting from n=2 characters in and m=3 in length;
    System.out.println(s.substring(n - 1, n + m - 1));
    // starting from n characters in, up to the end of the string;
    System.out.println(s.substring(n - 1));
    // whole string minus last character;
    System.out.println(s.substring(0, s.length() - 1));
    // starting from a known character char="d" within the string and of m length;
    int index = s.indexOf(charCode);
    System.out.println(s.substring(index, index + m));
    // starting from a known substring chars="cd" within the string and of m length.
    index = s.indexOf(charsCode);
    System.out.println(s.substring(index, index + m));
  }
}
