public class Main {
  public static void main(String[] args) {
    String s = "ABCDEFGH";
    int n = 2, m = 3;

    // Display the index for reference
    System.out.println("Index: " + "01234567");
    System.out.println("String: " + s);

    // Starting from n characters in and of m length
    if (n + m <= s.length()) {
      System.out.printf("Start %d, length %d:    %s%n", n, m, s.substring(n, n + m));
    } else {
      System.out.println("Invalid substring range");
    }

    // Starting from n characters in, up to the end of the string
    if (n < s.length()) {
      System.out.printf("Start %d, to end:      %s%n", n, s.substring(n));
    } else {
      System.out.println("Invalid substring range");
    }

    // Whole string minus the last character
    if (s.length() > 0) {
      System.out.printf("All but last:         %s%n", s.substring(0, s.length() - 1));
    } else {
      System.out.println("String is empty");
    }

    // Starting from a known character within the string and of m length
    int dx = s.indexOf('D');
    if (dx != -1 && dx + m <= s.length()) {
      System.out.printf("Start 'D', length %d:  %s%n", m, s.substring(dx, dx + m));
    } else {
      System.out.println("Invalid substring range");
    }

    // Starting from a known substring within the string and of m length
    int sx = s.indexOf("DE");
    if (sx != -1 && sx + m <= s.length()) {
      System.out.printf("Start \"DE\", length %d: %s%n", m, s.substring(sx, sx + m));
    } else {
      System.out.println("Invalid substring range");
    }
  }
}
