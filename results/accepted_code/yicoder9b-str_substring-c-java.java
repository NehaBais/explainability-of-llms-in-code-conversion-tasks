public class Main {
  // Substrings starting from n characters in and of m length
  static String substring(String s, int n, int m) {
    return s.substring(n, Math.min(s.length(), n + m));
  }

  // Starting from n characters in, up to the end of the string
  static String substringToEnd(String s, int n) {
    return s.substring(n);
  }

  // Whole string minus the last character
  static String wholeLess1(String s) {
    if (s.length() == 0) return "";
    else return s.substring(0, s.length() - 1);
  }

  // Starting from a known character within the string and of m length
  static String fromCharacter(String s, char ch, int m) {
    int index = s.indexOf(ch);
    if (index == -1) return "";
    else return substring(s, index, m);
  }

  // Starting from a known substring within the string and of m length
  static String fromSubstring(String s, String in, int m) {
    int index = s.indexOf(in);
    if (index == -1) return "";
    else return substring(s, index, m);
  }

  public static void main(String[] args) {
    String s = "hello world shortest program";
    System.out.println(substring(s, 12, 5)); // get "short"
    System.out.println(substringToEnd(s, 6)); // get "world shortest program"
    System.out.println(wholeLess1(s)); // get "hello world shortest progra"
    System.out.println(fromCharacter(s, 'w', 5)); // get "world"
    System.out.println(fromSubstring(s, "ro", 3)); // get "rog"
  }
}
