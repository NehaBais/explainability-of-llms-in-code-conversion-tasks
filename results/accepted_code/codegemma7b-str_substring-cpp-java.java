public class SubstringDisplay {

  public static void main(String[] args) {
    String s = "0123456789";

    int n = 3;
    int m = 4;
    char c = '2';
    String sub = "456";

    System.out.println(s.substring(n, n + m)); // Starting from n characters in and of m length
    System.out.println(
        s.substring(n)); // Starting from n characters in, up to the end of the string
    System.out.println(s.substring(0, s.length() - 1)); // Whole string minus the last character
    System.out.println(
        s.substring(
            s.indexOf(c),
            n + m)); // Starting from a known character within the string and of m length
    System.out.println(
        s.substring(
            s.indexOf(sub),
            n + m)); // Starting from a known substring within the string and of m length
  }
}
