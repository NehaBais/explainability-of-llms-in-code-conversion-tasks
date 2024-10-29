import java.util.*;

public class Main {
  public static void main(String[] args) {
    String s = "hello world shortest program";

    System.out.println(substring(s, 12, 5)); // get "short"
    System.out.println(substring(s, 6, -1)); // get  "world shortest program"
    System.out.println(strWholeLess1(s)); // "... progra"
    System.out.println(strFromChar(s, 'w', 5)); //  "world"
    System.out.println(strFromStr(s, "ro", 3)); //  "rog"
  }

  public static String substring(String s, int n, int m) {
    if (s == null || n < 0 || m < 0) return null;

    List<Character> list = new ArrayList<>();
    for (char c : s.toCharArray()) list.add(c);

    if (n > list.size()) return null;

    int endIndex = (m < 0) ? Integer.MAX_VALUE : n + m - 1;
    StringBuilder builder = new StringBuilder();
    for (int i = n; i < Math.min(list.size(), endIndex + 1); i++) {
      builder.append(list.get(i));
    }

    return builder.toString();
  }

  public static String strWholeLess1(String s) {
    if (s == null || s.length() == 0) return null;

    return substring(s, 0, s.length() - 1);
  }

  public static String strFromChar(String s, char ch, int m) {
    if (s == null) return null;

    int index = s.indexOf(ch);
    return substring(s, index, m > 0 ? Math.min(m, s.length() - index) : m);
  }

  public static String strFromStr(String s, String target, int m) {
    if (s == null || target == null || target.isEmpty()) return null;

    int index = s.indexOf(target);
    return substring(s, index, m > 0 ? Math.min(m, s.length() - index) : m);
  }
}
