
public class StringSubstrings {

  // Function to get a substring starting from n characters in and of m length
  public static char[] getSubstring(char[] s, int n, int m) {
    if (s == null || n < 0 || m < 0 || n >= s.length) {
      return null;
    }

    // Adjust negative m to mean 'up to the mth char from right'
    if (m < 0) {
      m = s.length - n + m + 1;
    }

    if (n + m > s.length) {
      m = s.length - n;
    }

    return java.util.Arrays.copyOfRange(s, n, n + m);
  }

  // Function to get a substring from the start of the string up to the end
  public static char[] getSubstringToEnd(char[] s, int n) {
    if (s == null || n < 0 || n >= s.length) {
      return null;
    }

    return java.util.Arrays.copyOfRange(s, n, s.length);
  }

  // Function to get a substring from the start of the string excluding the last character
  public static char[] getStringLessOne(char[] s) {
    if (s == null || s.length <= 1) {
      return null;
    }

    return java.util.Arrays.copyOfRange(s, 0, s.length - 1);
  }

  // Function to get a substring starting from a known character within the string and of m length
  public static char[] getSubstringFromChar(char[] s, char ch, int m) {
    int index = indexOf(s, ch);
    if (index == -1 || n < 0 || m < 0) {
      return null;
    }

    // Adjust negative m to mean 'up to the mth char from right'
    if (m < 0) {
      m = s.length - index + m + 1;
    }

    if (index + m > s.length) {
      m = s.length - index;
    }

    return java.util.Arrays.copyOfRange(s, index, index + m);
  }

  // Function to get a substring starting from a known substring within the string and of m length
  public static char[] getSubstringFromSubstring(char[] s, char[] in, int m) {
    int index = indexOf(s, in);
    if (index == -1 || n < 0 || m < 0) {
      return null;
    }

    // Adjust negative m to mean 'up to the mth char from right'
    if (m < 0) {
      m = s.length - index + m + 1;
    }

    if (index + m > s.length) {
      m = s.length - index;
    }

    return java.util.Arrays.copyOfRange(s, index, index + m);
  }

  // Helper function to find the index of a character in an array
  private static int indexOf(char[] s, char ch) {
    for (int i = 0; i < s.length; i++) {
      if (s[i] == ch) {
        return i;
      }
    }
    return -1;
  }

  // Helper function to find the index of a substring in an array
  private static int indexOf(char[] s, char[] in) {
    for (int i = 0; i <= s.length - in.length; i++) {
      boolean match = true;
      for (int j = 0; j < in.length; j++) {
        if (s[i + j] != in[j]) {
          match = false;
          break;
        }
      }
      if (match) {
        return i;
      }
    }
    return -1;
  }

  public static void main(String[] args) {
    char[] s = "hello world shortest program".toCharArray();

    System.out.println(new String(getSubstring(s, 12, 5))); // get "short"
    System.out.println(new String(getSubstringToEnd(s, 6))); // get "world shortest program"
    System.out.println(new String(getStringLessOne(s))); // "... progra"
    System.out.println(new String(getSubstringFromChar(s, 'w', 5))); // "world"
    System.out.println(new String(getSubstringFromSubstring(s, "ro".toCharArray(), 3))); // "rog"
  }
}
