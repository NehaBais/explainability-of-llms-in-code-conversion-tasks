public class Main {
  public static void bitwise(short a, short b) {
    System.out.println("a:   " + Integer.toBinaryString(a));
    System.out.println("b:   " + Integer.toBinaryString(b));

    // Bitwise logical operations
    System.out.println("and: " + Integer.toBinaryString(a & b));
    System.out.println("or:  " + Integer.toBinaryString(a | b));
    System.out.println("xor: " + Integer.toBinaryString(a ^ b));
    System.out.println("not: " + Integer.toBinaryString(~a));

    if (b < 0) {
      System.out.println(
          "Right operand is negative, but all shifts require an unsigned right operand (shift"
              + " distance).");
      return;
    }
    int ua = a;
    int ub = b;

    // Logical shifts (unsigned left operand)
    System.out.println("shl: " + Integer.toBinaryString(ua << ub));
    System.out.println("shr: " + Integer.toBinaryString(ua >> ub));

    // Arithmetic shifts  (signed left operand)
    System.out.println("las: " + Integer.toBinaryString(a << ub));
    System.out.println("ras: " + Integer.toBinaryString(a >> ub));

    // Rotations
    System.out.println("rol: " + Integer.toBinaryString(ua << ub | (int) (ua >> (16 - ub))));
    System.out.println("ror: " + Integer.toBinaryString((int) (ua >> ub) | a << (16 - ub)));
  }

  public static void main(String[] args) {
    short a = -460;
    short b = 6;
    bitwise(a, b);
  }
}
