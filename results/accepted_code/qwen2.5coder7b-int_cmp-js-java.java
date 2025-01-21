import java.util.Scanner;

public class Compare {
  public static void main(String[] args) {

    Scanner scanner = new Scanner(System.in);

    System.out.println("Enter the first integer:");
    int a = scanner.nextInt();

    System.out.println("Enter the second integer:");
    int b = scanner.nextInt();

    if (a == b) System.out.println(a + " equals " + b);
    else if (a < b) System.out.println(a + " is less than " + b);
    else System.out.println(a + " is greater than " + b);

    scanner.close();
  }
}
