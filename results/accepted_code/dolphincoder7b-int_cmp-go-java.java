import java.util.Scanner;

public class CompareIntegers {
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);
    System.out.print("Enter number: ");
    int n1 = scanner.nextInt();
    System.out.print("Enter number: ");
    int n2 = scanner.nextInt();

    switch (n1 < n2 ? -1 : (n1 == n2 ? 0 : 1)) {
      case -1:
        System.out.println(n1 + " less than " + n2);
        break;
      case 0:
        System.out.println(n1 + " equal to " + n2);
        break;
      case 1:
        System.out.println(n1 + " greater than " + n2);
    }
  }
}
