import java.util.Scanner;

public class Main {

  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);

    System.out.println("Enter first integer:");
    int a = scanner.nextInt();

    System.out.println("Enter second integer:");
    int b = scanner.nextInt();

    System.out.printf("a + b = %d\n", a + b);
    System.out.printf("a - b = %d\n", a - b);
    System.out.printf("a * b = %d\n", a * b);
    System.out.printf("a / b = %d, remainder %d\n", a / b, a % b);

    scanner.close();
  }
}
