public class Main {
  public static void main(String[] args) {
    String s = "abc文字化けdef";
    int n = 2;
    int m = 3;

    // Print 3 characters starting at index 2 (c文字)
    System.out.println(s.substring(n, Math.min(n + m, s.length())));

    // Print all characters starting at index 2 (c文字化けdef)
    System.out.println(s.substring(n));

    // Print all characters except the last (abc文字化けde)
    System.out.println(s.substring(0, s.length() - 1));

    // Print 3 characters starting with 'b' (bc文)
    int cpos = s.indexOf('b');
    if (cpos >= 0) {
      System.out.println(
          s.substring(Math.min(cpos + n, s.length()), Math.min(cpos + m, s.length())));
    }

    // Print 3 characters starting with "けd" (けde)
    int spos = s.indexOf("けd");
    if (spos >= 0) {
      System.out.println(
          s.substring(Math.min(spos + n, s.length()), Math.min(spos + m, s.length())));
    }
  }
}
