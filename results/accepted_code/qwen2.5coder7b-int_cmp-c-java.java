import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);

    System.out.println("Enter two integers: ");
    int a = scanner.nextInt();
    int b = scanner.nextInt();

    if (a < b) System.out.printf("%d is less than %d\n", a, b);

    if (a == b) System.out.printf("%d is equal to %d\n", a, b);

    if (a > b) System.out.printf("%d is greater than %d\n", a, b);
  }
}
