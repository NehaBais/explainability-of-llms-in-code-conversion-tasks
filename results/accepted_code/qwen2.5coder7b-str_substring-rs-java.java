import java.text.BreakIterator;
import java.util.Locale;

public class Main {
  public static void main(String[] args) {
    String s = "abc文字化けdef";
    int n = 2;
    int m = 3;

    // Print 3 characters starting at index 2 (c文字)
    System.out.println(getSubstring(s, n, n + m));

    // Print all characters starting at index 2 (c文字化けdef)
    System.out.println(getSubstring(s, n, s.length()));

    // Print all characters except the last (abc文字化けde)
    System.out.println(getSubstring(s, 0, s.length() - 1));

    // Print 3 characters starting with 'b' (bc文)
    int cpos = s.indexOf('b');
    if (cpos != -1) {
      System.out.println(getSubstring(s, cpos, cpos + m));
    }

    // Print 3 characters starting with "けd" (けde)
    int spos = s.indexOf("けd");
    if (spos != -1) {
      System.out.println(getSubstring(s, spos, spos + m));
    }
  }

  private static String getSubstring(String str, int start, int end) {
    BreakIterator boundary = BreakIterator.getCharacterInstance(Locale.US);
    boundary.setText(str);
    int startIdx = boundary.following(start);
    int endIdx = boundary.following(end);

    if (startIdx == -1 || endIdx == -1) return "";

    return str.substring(startIdx, endIdx - 1);
  }
}
