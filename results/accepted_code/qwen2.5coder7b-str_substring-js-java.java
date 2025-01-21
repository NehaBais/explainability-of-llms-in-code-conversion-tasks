public class Main {
  public static void main(String[] args) {
    String str = "abcdefgh";

    int n = 2;
    int m = 3;

    //  *  starting from n characters in and of m length;
    System.out.println(getSubstring(str, n, m)); // => "cde"

    //  * starting from n characters in, up to the end of the string;
    System.out.println(getSubstring(str, n)); // => "cdefgh"

    //  * whole string minus last character;
    System.out.println(getSubstringExcludingLastChar(str)); // => "abcdefg"

    //  * starting from a known character within the string and of m length;
    char c = 'b';
    System.out.println(getSubstringFromCharacter(str, c, m)); // => "bcd"

    //  * starting from a known substring within the string and of m length.
    String subStr = "bc";
    System.out.println(getSubstringFromSubstring(str, subStr, m)); // => "bcd"
  }

  public static String getSubstring(String str, int n, int m) {
    return str.substring(n, n + m);
  }

  public static String getSubstring(String str, int n) {
    return str.substring(n);
  }

  public static String getSubstringExcludingLastChar(String str) {
    return str.substring(0, str.length() - 1);
  }

  public static String getSubstringFromCharacter(String str, char c, int m) {
    int index = str.indexOf(c);
    if (index == -1) {
      throw new IllegalArgumentException("Character not found in string");
    }
    return str.substring(index, index + m);
  }

  public static String getSubstringFromSubstring(String str, String subStr, int m) {
    int index = str.indexOf(subStr);
    if (index == -1) {
      throw new IllegalArgumentException("Substring not found in string");
    }
    return str.substring(index, index + m);
  }
}
