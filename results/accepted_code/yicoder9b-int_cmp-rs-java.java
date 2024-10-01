import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);
    int num1, num2;
    System.out.println("Enter the first number:");
    num1 = scanner.nextInt();
    System.out.println("Enter the second number:");
    num2 = scanner.nextInt();

    if (num1 < num2) {
      System.out.println(num1 + " is less than " + num2);
    } else if (num1 == num2) {
      System.out.println(num1 + " equals " + num2);
    } else {
      if (num1 > num2) {
        System.out.println(num1 + " is greater than " + num2);
      }
    }
  }
}
