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
    System.out.println("a:   " + Integer.toBINARYString(a));
    System.out.println("b:   " + Integer.toBINARYString(b));

    // Bitwise logical operations
    int and = a & b;
    int or = a | b;
    int xor = a ^ b;
    int not = ~a;
    System.out.println("and: " + Integer.toBINARYString(and));
    System.out.println("or:  " + Integer.toBINARYString(or));
    System.out.println("xor: " + Integer.toBINARYString(xor));
    System.out.println("not: " + Integer.toBINARYString(not));

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
    System.out.println("shl: " + Integer.toBINARYString(shl));
    System.out.println("shr: " + Integer.toBINARYString(shr));

    // Arithmetic shifts (signed left operand)
    int las = a << ub;
    int ras = a >> ub;
    System.out.println("las: " + Integer.toBINARYString(las));
    System.out.println("ras: " + Integer.toBINARYString(ras));

    // Rotations
    int rol = (ua << ub) | (ua >>> (16 - ub));
    int ror = (ua >>> ub) | (ua << (16 - ub));
    System.out.println("rol: " + Integer.toBINARYString(rol));
    System.out.println("ror: " + Integer.toBINARYString(ror));
  }
}
