public class Main {

  public static void main(String[] args) {

    String s = "0123456789";

    int n = 3, m = 4, c = '2';
    String sub = "456";
    System.out.println(s.substring(n, n + m)); // prints "3456"
    System.out.println(s.substring(n)); // prints "3456789"
    System.out.println(s.substring(0, s.length() - 1)); // prints "0123456789"
    System.out.println(s.substring(s.indexOf(c), n + m)); // prints "23456"
    System.out.println(s.substring(s.indexOf(sub), n + m)); // prints "456"
  }
}
