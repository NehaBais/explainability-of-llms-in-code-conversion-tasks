public class Main {
  public static void main(String[] args) {
    int a = -460;
    int b = 6;
    bitwise(a, b);
  }

  static void bitwise(int a, int b) {
    System.out.println("a:   " + Integer.toBinaryString(a));
    System.out.println("b:   " + Integer.toBinaryString(b));
    // Bitwise logical operations
    System.out.println("and: " + Integer.toBinaryString(a & b));
    System.out.println("or:  " + Integer.toBinaryString(a | b));
    System.out.println("xor: " + Integer.toBinaryString(a ^ b));
    System.out.println(
        "not: "
            + Integer.toBinaryString(
                ~a & 0xFFFF)); // XOR operation with ~0xFFFF for negative numbers

    if (b < 0) {
      System.err.println(
          "Right operand is negative, but all shifts require an unsigned right operand (shift"
              + " distance).");
      return;
    }

    int ua = a;
    int ub = b;

    // Logical shifts (unsigned left operand)
    System.out.println("shl: " + Integer.toBinaryString(ua <<= ub));
    // Arithmetic shifts (signed left operand)
    System.out.println("las: " + Integer.toBinaryString((int) (a >>= ub)));
    System.out.println("ras: " + Integer.toBinaryString((int) (a >>>= ub)));

    // Rotations (left rotate and right rotate)
    System.out.println(
        "rol: " + Integer.toBinaryString((a <<= ub) | Integer.getLowestBit(a >> ub)));
    System.out.println(
        "ror: " + Integer.toBinaryString((Integer.getLowestBit(a >> ub) | a >>>= ub) <<= ub));
  }
}
