public class SubstringDemo {
  public static void main(String[] args) {
    String str = "abcdefgh";
    int n = 2;
    int m = 3;
    char ch = 'd';
    String chars = "cd";

    // starting from n characters in and of m length;
    System.out.println(str.substring(n - 1, n + m - 1));

    // starting from n characters in, up to the end of the string;
    System.out.println(str.substring(n - 1));

    // whole string minus last character;
    System.out.println(str.substring(0, str.length() - 1));

    // starting from a known character char="d" within the string and of m length;
    int index = str.indexOf(ch);
    System.out.println(str.substring(index, index + m));

    // starting from a known substring chars="cd" within the string and of m length.
    int indexOfChars = str.indexOf(chars);
    System.out.println(str.substring(indexOfChars, indexOfChars + m));
  }
}
