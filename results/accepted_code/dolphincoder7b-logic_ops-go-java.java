import java.util.Scanner;

public class Main {

  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);
    int num1, num2;

    System.out.println("Enter two integers: ");
    num1 = scanner.nextInt();
    num2 = scanner.nextInt();

    if (num1 > 0 && num2 > 0) System.out.println("Both numbers are positive");
    else System.out.println("At least one of the numbers is non-positive");
  }
}
