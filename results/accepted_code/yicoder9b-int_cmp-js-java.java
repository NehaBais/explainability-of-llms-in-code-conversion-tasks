import java.io.PrintWriter;
import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);
    PrintWriter printWriter = new PrintWriter(System.out, true);
    printWriter.println("Enter the first integer: ");
    int a = scanner.nextInt();
    printWriter.println("Enter the second integer: ");
    int b = scanner.nextInt();
    if (a == b) {
      printWriter.printf("%d equals %d\n", a, b);
    } else if (a < b) {
      printWriter.printf("%d is less than %d\n", a, b);
    } else {
      printWriter.printf("%d is greater than %d\n", a, b);
    }
  }
}
