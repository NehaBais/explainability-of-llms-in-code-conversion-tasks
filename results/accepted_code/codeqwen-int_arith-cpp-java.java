import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    System.out.println("Enter two integers:");
    int A = sc.nextInt();
    int b = sc.nextInt();

    System.out.println("A+b = " + (A + b) + "\n");
    System.out.println("A-b = " + (A - b) + "\n");
    System.out.println("A*b = " + (A * b) + "\n");

    int quotient = A / b;
    int remainder = A % b;
    if (remainder * b < 0) {
      quotient++;
      remainder -= b;
    }
    System.out.println("A/b = " + quotient + ", remainder " + remainder + "\n");
  }
}
