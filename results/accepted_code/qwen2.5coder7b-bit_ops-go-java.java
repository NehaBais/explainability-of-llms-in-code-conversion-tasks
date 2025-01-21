public class Main {

  public static void bitwise(int a, int b) {
    System.out.printf("a:   %16s%n", Integer.toBinaryString(a));
    System.out.printf("b:   %16s%n", Integer.toBinaryString(b));

    // Bitwise logical operations
    System.out.printf("and: %16s%n", Integer.toBinaryString(a & b));
    System.out.printf("or:  %16s%n", Integer.toBinaryString(a | b));
    System.out.printf("xor: %16s%n", Integer.toBinaryString(a ^ b));
    System.out.printf("not: %16s%n", Integer.toBinaryString(~a));

    if (b < 0) {
      System.out.println(
          "Right operand is negative, but all shifts require an unsigned right operand (shift"
              + " distance).");
      return;
    }

    int ub = Math.abs(b);

    // Logical shifts
    System.out.printf("shl: %16s%n", Integer.toBinaryString(a << ub));
    System.out.printf("shr: %16s%n", Integer.toBinaryString(a >>> ub));

    // Arithmetic shifts
    System.out.printf("las: %16s%n", Integer.toBinaryString(a << ub));
    System.out.printf("ras: %16s%n", Integer.toBinaryString(a >> ub));

    // Rotations
    System.out.printf("rol: %16s%n", Integer.toBinaryString((a << ub) | (a >>> (32 - ub))));
    System.out.printf("ror: %16s%n", Integer.toBinaryString((a >>> ub) | (a << (32 - ub))));
  }

  public static void main(String[] args) {
    bitwise(-460, 6);
  }
}
