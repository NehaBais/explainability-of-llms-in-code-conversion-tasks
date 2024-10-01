public class Main {
  static String s = "0123456789";

  public static void main(String[] args) {
    int n = 3;
    int m = 4;
    char c = '2';
    String sub = "456";

    System.out.println(s.substring(n, Math.min(n + m, s.length())));
    System.out.println(s.substring(n));
    System.out.println(s.substring(0, s.length() - 1));
    int index = s.indexOf(String.valueOf(c));
    if (index >= 0) {
      System.out.println(s.substring(Math.min(n + m, s.length())));
    }
    index = s.indexOf(sub);
    if (index >= 0) {
      System.out.println(
          s.substring(Math.min(index, s.length() - m), Math.min(index + m, s.length())));
    }
  }
}
