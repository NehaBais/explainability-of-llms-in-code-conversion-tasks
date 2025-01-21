import java.text.BreakIterator;
import java.util.Iterator;

public class SubstringExample {
  public static void main(String[] args) {
    String s = "abcdefgh";
    int n = 2, m = 3;
    char charToFind = 'd';
    String charsToFind = "cd";

    // Starting from n=2 characters in and m=3 in length
    System.out.println(getSubstring(s, n - 1, m));

    // Starting from n characters in, up to the end of the string
    System.out.println(getSubstring(s, n - 1, s.length()));

    // Whole string minus last character
    System.out.println(getSubstring(s, 0, s.length() - 1));

    // Starting from a known character 'd' within the string and of m length
    int indexChar = s.indexOf(charToFind);
    if (indexChar != -1) {
      System.out.println(getSubstring(s, indexChar, m));
    } else {
      System.out.println("Character not found");
    }

    // Starting from a known substring "cd" within the string and of m length
    int indexChars = s.indexOf(charsToFind);
    if (indexChars != -1) {
      System.out.println(getSubstring(s, indexChars, m));
    } else {
      System.out.println("Substring not found");
    }
  }

  private static String getSubstring(String str, int startIndex, int length) {
    BreakIterator boundary = BreakIterator.getCharacterInstance();
    boundary.setText(str);
    Iterator<Integer> iterator = boundary.following(startIndex);

    int start = startIndex;
    for (int i = 0; i < length && iterator.hasNext(); ) {
      start = iterator.next();
      if (!iterator.hasNext()) {
        break;
      }
    }

    return str.substring(start, Math.min(str.length(), start + length));
  }
}
