import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);

    int input1 = sc.nextInt();
    int input2 = sc.nextInt();

    int qq = input1 + input2;
    System.out.println("Sum: " + qq);

    int ww = input1 - input2;
    System.out.println("Difference: " + ww);

    int ee = input1 * input2;
    System.out.println("Product: " + ee);

    double rr = (double) input1 / input2;
    System.out.println("Integer quotient: " + Math.round(rr));

    int fr = (int) ((double) input1 / input2);
    System.out.println("Float quotient: " + fr);

    double tt = ((double) input1 / input2);
    double uu = (int) tt - tt;
    // System.out.println(tt);
    System.out.println("Whole Remainder: " + Math.round(uu * -10));
    System.out.println("Actual Remainder: " + uu * -10);

    int yy = (int) Math.pow(input1, input2);
    System.out.println("Exponentiation: " + yy);
  }
}
