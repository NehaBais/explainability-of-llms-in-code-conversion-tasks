public class Main {
  public static void main(String[] args) {
    String s = "0123456789";

    int n = 3;
    int m = 4;
    char c = '2';
    String sub = "456";

    System.out.println(s.substring(n, Math.min(n + m, s.length())));
    System.out.println(s.substring(n));
    System.out.println(s.substring(0, s.length() - 1));
    System.out.println(s.substring(s.indexOf(c), Math.min(s.indexOf(c) + m, s.length())));
    System.out.println(s.substring(s.indexOf(sub), Math.min(s.indexOf(sub) + m, s.length())));
  }
}
