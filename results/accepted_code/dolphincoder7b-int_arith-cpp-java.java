import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);
    int a = scanner.nextInt();
    int b = scanner.nextInt();
    System.out.println("a+b = " + (a + b));
    System.out.println("a-b = " + (a - b));
    System.out.println("a*b = " + (a * b));
    double quotient = Math.floor(a / (double) b);
    System.out.printf("a/b = %.0f, remainder %d\n", quotient, a % b);
  }
}
