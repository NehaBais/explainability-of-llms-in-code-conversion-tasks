public class Main {
  public static void main(String[] args) {
    String s = "abc文字化けdef";
    int n = 2;
    int m = 3;

    // Print 3 characters starting at index 2 (c文字)
    System.out.println(s.substring(n, Math.min(n + m, s.length())));

    // Print all characters starting at index 2 (c文字化けdef)
    if (n < s.length()) {
      System.out.println(s.substring(n));
    } else {
      System.out.println("");
    }

    // Print all characters except the last (abc文字化けde)
    StringBuilder sb = new StringBuilder();
    for (int i = 0; i < s.length() - 1; i++) {
      sb.append(s.charAt(i));
    }
    System.out.println(sb.toString());

    // Print 3 characters starting with 'b' (bc文)
    int cpos = s.indexOf('b');
    if (cpos != -1 && cpos + m <= s.length()) {
      System.out.println(s.substring(cpos, Math.min(cpos + m, s.length())));
    } else {
      System.out.println("");
    }

    // Print 3 characters starting with "けd" (けde)
    int spos = s.indexOf("けd");
    if (spos != -1 && spos + m <= s.length()) {
      System.out.println(s.substring(spos, Math.min(spos + m, s.length())));
    } else {
      System.out.println("");
    }
  }
}
