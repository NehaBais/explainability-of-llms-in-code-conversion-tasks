import java.util.Scanner;

public class SubstringExample {
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);

    String s = scanner.nextLine();
    int n = scanner.nextInt();
    int m = scanner.nextInt();

    String result = substring(s, n, m);
    System.out.println(result);
  }

  public static String substring(String s, int n, int m) {
    if (n < 0 || m < 0) {
      return null;
    }

    if (n + m > s.length()) {
      return null;
    }

    String result = "";
    for (int i = 0; i < m; i++) {
      result += s.charAt(n + i);
    }

    return result;
  }
}
