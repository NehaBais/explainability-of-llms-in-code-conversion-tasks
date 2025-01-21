import java.util.Scanner;

public class Main {

  public static void main(String[] args) {

    Scanner scanner = new Scanner(System.in);

    int a, b;
    System.out.print("Enter first integer: ");
    a = scanner.nextInt();
    System.out.print("Enter second integer: ");
    b = scanner.nextInt();

    if (a < b) System.out.println(a + " is less than " + b);
    else if (a == b) System.out.println(a + " is equal to " + b);
    else System.out.println(a + " is greater than " + b);

    scanner.close();
  }
}
