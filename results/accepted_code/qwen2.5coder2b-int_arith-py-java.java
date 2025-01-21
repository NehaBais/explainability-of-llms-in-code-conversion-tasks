import java.util.Scanner;

public class Main {
  public static void main(String[] args) {

    Scanner scanner = new Scanner(System.in);

    System.out.println("Enter first number: ");
    int input1 = scanner.nextInt();

    System.out.println("Enter second number: ");
    int input2 = scanner.nextInt();

    int qq = input1 + input2;
    double ww = input1 - input2;
    double ee = input1 * input2;

    // The quotient rounds towards zero
    int rr = (int) Math.floor(input1 / input2);

    // The remainder can be positive or negative depending on the values of both operands
    double tt = (double) input1 / input2;

    int uu = (int) (tt - Math.floor(tt)) * -10;

    double yy = Math.pow(input1, input2);

    System.out.println("Sum: 		  " + qq);
    System.out.println("Difference: 	  " + ww);
    System.out.println("Product: 	  " + ee);
    System.out.println("Integer quotient: " + rr);
    System.out.println("Float quotient:   " + tt);
    System.out.println("Whole Remainder:  " + uu);
    System.out.println("Actual Remainder: " + uu);
    System.out.println("Exponentiation:   " + yy);

    scanner.close();
  }
}
