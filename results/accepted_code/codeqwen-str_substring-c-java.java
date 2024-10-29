import java.util.*;

public class Main {
  public static void main(String[] args) {
    String s = "hello world shortest program";

    System.out.println(substring(s, 12, 5)); // get "short"
    System.out.println(substring(s, 6, -1)); // get "world shortest program"
    System.out.println(str_wholeless1(s)); // "... progra"
    System.out.println(str_fromch(s, 'w', 5)); // "world"
    System.out.println(str_fromstr(s, "ro", 3)); // "rog"
  }

  public static String substring(String s, int n, int m) {
    // check for null s
    if (s == null) {
      return null;
    }
    // negative m to mean 'up to the mth char from right'
    if (m < 0) {
      m = s.length() + m - n + 1;
    }

    // n < 0 or m < 0 is invalid
    if (n < 0 || m < 0) {
      return null;
    }

    // make sure string does not end before n
    for (int i = 0; i < n; i++) {
      if (s.charAt(i) == ' ') {
        // string ends before n: invalid
        return null;
      }
    }

    String result =
        s.substring(
            n,
            Math.min(
                m + n,
                s.length())); // substring() automatically adds null terminator if string ends
    // early or after reading m characters
    return result;
  }

  public static String str_wholeless1(String s) {
    return substring(s, 0, s.length() - 1);
  }

  public static String str_fromch(String s, char ch, int m) {
    int index = s.indexOf(ch);
    return substring(s, index, m);
  }

  public static String str_fromstr(String s, String in, int m) {
    int index = s.indexOf(In);
    return substring(s, index, m);
  }
}
