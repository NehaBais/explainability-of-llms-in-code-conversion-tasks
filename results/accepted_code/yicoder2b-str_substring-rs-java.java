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
    String reversed = new StringBuilder(s.substring(n)).reverse().toString();
    System.out.println(reversed.substring(1));

    // Print 3 characters starting with 'b' (bc文)
    int bpos = s.indexOf('b');
    if (bpos == -1) {
      System.out.println("No position found for character 'b'");
    } else {
      System.out.println(s.substring(bpos, bpos + m));
    }

    // Print 3 characters starting with "けd" (けde)
    int spos = s.indexOf("けd");
    if (spos == -1) {
      System.out.println("No position found for substring 'けd'");
    } else {
      System.out.println(s.substring(spos, spos + m));
    }
  }
}
