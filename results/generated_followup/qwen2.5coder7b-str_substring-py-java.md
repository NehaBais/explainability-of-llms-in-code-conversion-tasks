### Error Explanation:
The error occurs because `boundary.following(startIndex)` returns an `int`, not an `Iterator<Integer>`. 

### Fix Explanation:
To fix this, we need to convert the integer returned by `following` into an iterator that can be used with a loop.

Here is the corrected code in a single code block:

```java
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
    
    // Convert the integer to an iterator
    Iterator<Integer> iterator = () -> {
        int current = boundary.following(startIndex);
        if (current == BreakIterator.DONE || current >= str.length()) return null;
        else return current++;
    };

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
```
