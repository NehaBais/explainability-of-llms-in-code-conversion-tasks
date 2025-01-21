package main;

import java.util.Scanner;

public class BitwiseOperations {

  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);
    System.out.print("Enter first integer: ");
    int a = scanner.nextInt();
    System.out.print("Enter second integer: ");
    int b = scanner.nextInt();
    bitwiseOperations(a, b);
  }

  public static void bitwiseOperations(int a, int b) {
    System.out.println("a:   " + Integer.toString(a, 2));
    System.out.println("b:   " + Integer.toString(b, 2));

    // Bitwise logical operations
    int and = a & b;
    int or = a | b;
    int xor = a ^ b;
    int not = ~a;
    System.out.println("and: " + Integer.toString(and, 2));
    System.out.println("or:  " + Integer.toString(or, 2));
    System.out.println("xor: " + Integer.toString(xor, 2));
    System.out.println("not: " + Integer.toString(not, 2));

    if (b < 0) {
      System.err.println(
          "Right operand is negative, but all shifts require an unsigned right operand (shift"
              + " distance).");
      return;
    }
    int ua = a & 0xFFFF;
    int ub = b & 0x1F;

    // Logical shifts (unsigned left operand)
    int shl = ua << ub;
    int shr = ua >> ub;
    System.out.println("shl: " + Integer.toString(shl, 2));
    System.out.println("shr: " + Integer.toString(shr, 2));

    // Logical shifts (signed left operand)
    shr = a >>> ub;
    System.out.println("shr: " + Integer.toString(shr, 2));

    // Logical shifts (signed right operand)
    shl = a << ub;
    System.out.println("shl: " + Integer.toString(shl, 2));

    // Logical shifts (unsigned right operand)
    shr = a >> ub;
    System.out.println("shr: " + Integer.toString(shr, 2));
  }
}
