public class SubstringExample {
  public static void main(String[] args) {
    String s = "0123456789";

    int n = 3;
    int m = 4;
    char c = '2';
    String sub = "456";

    System.out.println(s.substring(n, n + m)); // Prints: 3456
    System.out.println(s.substring(n)); // Prints: 3456789
    System.out.println(s.substring(0, s.length() - 1)); // Prints: 012345678
    System.out.println(s.substring(s.indexOf(c), s.indexOf(c) + m)); // Prints: 2345
    System.out.println(s.substring(s.indexOf(sub), s.indexOf(sub) + m)); // Prints: 456
  }
}
