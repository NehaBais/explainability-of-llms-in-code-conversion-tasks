public class Main {
  public static void main(String[] args) {
    String str = "abcdefgh";

    int n = 2;
    int m = 3;

    // * starting from n characters in and of m length
    System.out.println(str.substring(n, n + m)); // => "cde"

    // * starting from n characters in, up to the end of the string
    System.out.println(str.substring(n)); // => "cdefgh"
    System.out.println(str.subSequence(n, str.length())); // => "cdefgh"

    // * whole string minus last character
    System.out.println(str.substring(0, str.length() - 1)); // => "abcdefg"

    // * starting from a known character within the string and of m length
    int index = str.indexOf('b');
    if (index != -1) {
      System.out.println(str.substring(index, index + m)); // => "bcd"
    }

    // * starting from a known substring within the string and of m length.
    index = str.indexOf("bc");
    if (index != -1) {
      System.out.println(str.substring(index, index + m)); // => "bcd"
    }
  }
}
