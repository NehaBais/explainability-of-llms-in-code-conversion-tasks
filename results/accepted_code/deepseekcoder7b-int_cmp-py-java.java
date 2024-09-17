import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    Scanner scan = new Scanner(System.in);

    System.out.print("Enter value of a: ");
    int a = scan.nextInt();

    System.out.print("Enter value of b: ");
    int b = scan.nextInt();

    if (a < b) {
      System.out.println("a is less than b");
    } else if (a > b) {
      System.out.println("a is greater than b");
    } else if (a == b) {
      System.out.println("a is equal to b");
    }

    scan.close(); // close the scanner
  }
}
