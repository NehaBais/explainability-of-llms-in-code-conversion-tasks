public class Main {
  public static void main(String[] args) {
    String s = "abc文字化けdef";
    int n = 2;
    int m = 3;

    // Print 3 characters starting at index 2 (c文字)
    System.out.println(s.substring(n, n + m));

    // Print all characters starting at index 2 (c文字化けdef)
    System.out.println(s.substring(n));

    // Print all characters except the last (abc文字化けde)
    int length = s.length();
    System.out.println(s.substring(0, length - 1));

    // Print 3 characters starting with 'b' (bc文)
    int cpos = s.indexOf('b');
    System.out.println(s.substring(cpos, cpos + m));

    // Print 3 characters starting with "けd" (けde)
    int spos = s.indexOf("けd");
    System.out.println(s.substring(spos, spos + m));
  }
}
