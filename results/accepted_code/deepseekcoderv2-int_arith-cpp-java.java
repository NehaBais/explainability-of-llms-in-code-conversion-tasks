import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    Scanner input = new Scanner(System.in);
    System.out.print("Enter two integers: ");
    int a = input.nextInt();
    int b = input.nextInt();
    System.out.println("a+b = " + (a + b));
    System.out.println("a-b = " + (a - b));
    System.out.println("a*b = " + (a * b));
    System.out.println("a/b = " + a / b + ", remainder " + a % b);
  }
}
