public class Main {
  public static void main(String[] args) {
    String str = "abcdefgh";

    int n = 2;
    int m = 3;

    // starting from n characters in and of m length;
    System.out.println(str.substring(n, n + m)); // => "cde"

    // starting from n characters in, up to the end of the string;
    if (n < str.length()) {
      System.out.println(str.substring(n)); // => "cdefgh"
    } else {
      System.out.println(""); // Handle case where n is out of bounds
    }

    // whole string minus last character;
    if (str.length() > 0) {
      System.out.println(str.substring(0, str.length() - 1)); // => "abcdefg"
    } else {
      System.out.println(""); // Handle empty string case
    }

    // starting from a known character within the string and of m length;
    int indexOfB = str.indexOf('b');
    if (indexOfB != -1 && indexOfB < str.length()) {
      System.out.println(str.substring(indexOfB, indexOfB + m)); // => "bcd"
    } else {
      System.out.println(""); // Handle case where 'b' is not found
    }

    // starting from a known substring within the string and of m length.
    int indexOfBC = str.indexOf("bc");
    if (indexOfBC != -1 && indexOfBC < str.length()) {
      System.out.println(str.substring(indexOfBC, indexOfBC + m)); // => "bcd"
    } else {
      System.out.println(""); // Handle case where 'bc' is not found
    }
  }
}
