import java.util.Scanner;

public class Substring {

  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);
    String input = "ABCDEFGH";

    int n, m; // For reference
    System.out.println("Index:  01234567");
    System.out.println("String:  " + input);

    System.out.print("Start ");
    n = scanner.nextInt();
    System.out.print(", length ");
    m = scanner.nextInt();
    String result = input.substring(n, n + m);
    System.out.printf("%s%n", result);

    System.out.print("Start ");
    n = scanner.nextInt();
    System.out.println(", to end:       " + input.substring(n));

    System.out.println("All but last:          " + input.substring(0, input.length() - 1));

    String knownChar = "D";
    int dx = input.indexOf(knownChar);
    System.out.print("Start '" + knownChar + "', length ");
    m = scanner.nextInt();
    result = input.substring(dx, dx + m);
    System.out.printf("%s%n", result);

    String knownSubstring = "DE";
    int sx = input.indexOf(knownSubstring);
    System.out.print("Start \"" + knownSubstring + "\", length ");
    m = scanner.nextInt();
    result = input.substring(sx, sx + m);
    System.out.printf("%s%n", result);
  }
}
