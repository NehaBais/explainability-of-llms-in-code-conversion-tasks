public class Main {
  public static void main(String[] args) {
    String s = "abcdefgh";
    int n = 2, m = 3;
    char c1 = 'd', c2 = 'c';
    String s1 = "cd", s2 = "ef";

    // starting from n=2 characters in and m=3 in length;
    System.out.println(s.substring(n - 1, n + m - 1));

    // starting from n characters in, up to the end of the string;
    System.out.println(s.substring(n - 1));

    // whole string minus last character;
    System.out.println(s.substring(0, s.length() - 1));

    // starting from a known character c1="d" within the string and of m length;
    int indx = s.indexOf(c1);
    if (indx != -1) {
      System.out.println(s.substring(indx, Math.min(indx + m, s.length())));
    }

    // starting from a known substring s1="cd" within the string and of m length;
    indx = s.indexOf(s1);
    if (indx != -1) {
      System.out.println(s.substring(indx, Math.min(indx + m, s.length())));
    }

    // starting from a known substring s2="ef" within the string and of m length;
    indx = s.indexOf(s2);
    if (indx != -1) {
      System.out.println(s.substring(indx, Math.min(indx + m, s.length())));
    }
  }
}
