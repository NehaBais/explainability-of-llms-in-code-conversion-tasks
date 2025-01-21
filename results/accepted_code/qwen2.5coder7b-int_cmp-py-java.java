import java.util.Scanner;

public class Main {
  public static void main(String[] args) {

    Scanner scanner = new Scanner(System.in);

    System.out.println("Enter value of a: ");
    int a = Integer.parseInt(scanner.nextLine());

    System.out.println("Enter value of b: ");
    int b = Integer.parseInt(scanner.nextLine());

    if (a < b) {
      System.out.println("a is less than b");
    } else if (a > b) {
      System.out.println("a is greater than b");
    } else {
      System.out.println("a is equal to b");
    }
  }
}
