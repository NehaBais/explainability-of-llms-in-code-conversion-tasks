public class SubstringExample {

  public static void main(String[] args) {
    String str = "abcdefgh";
    int n = 2;
    int m = 3;

    // starting from n characters in and of m length
    String substr1 = str.substring(n, n + m);
    System.out.println("substr1: " + substr1); // Output: substr1: cde

    // starting from n characters in, up to the end of the string
    String substr2 = str.substring(n);
    System.out.println("substr2: " + substr2); // Output: substr2: cdefgh

    // whole string minus last character
    String substr3 = str.substring(0, str.length() - 1);
    System.out.println("substr3: " + substr3); // Output: substr3: abcdefg

    // starting from a known character within the string and of m length
    int index = str.indexOf('b');
    String substr4 = str.substring(index, index + m);
    System.out.println("substr4: " + substr4); // Output: substr4: bcd

    // starting from a known substring within the string and of m length
    int start = str.indexOf("bc");
    String substr5 = str.substring(start, start + m);
    System.out.println("substr5: " + substr5); // Output: substr5: bcd
  }
}
