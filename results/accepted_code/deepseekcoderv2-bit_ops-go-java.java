public class BitwiseOperations {
  public static void bitwise(int a, int b) {
    System.out.printf("a:   %016s%n", Integer.toBinaryString(a));
    System.out.printf("b:   %016s%n", Integer.toBinaryString(b));

    // Bitwise logical operations
    System.out.printf("and: %016s%n", Integer.toBinaryString(a & b));
    System.out.printf("or:  %016s%n", Integer.toBinaryString(a | b));
    System.out.printf("xor: %016s%n", Integer.toBinaryString(a ^ b));
    System.out.printf("not: %016s%n", Integer.toBinaryString(~a));

    if (b < 0) {
      System.out.println(
          "Right operand is negative, but all shifts require an unsigned right operand (shift"
              + " distance).");
      return;
    }
    int ua = a & 0xFFFF; // Ensure the number is treated as unsigned for shifts
    int ub = b & 0x1F; // Shift distance should be within 0 to 31

    // Logical shifts (unsigned left operand)
    System.out.printf("shl: %016s%n", Integer.toBinaryString(ua << ub));
    System.out.printf("shr: %016s%n", Integer.toBinaryString(ua >> ub));

    // Arithmetic shifts (signed left operand)
    System.out.printf("las: %016s%n", Integer.toBinaryString((short) (a << ub)));
    System.out.printf("ras: %016s%n", Integer.toBinaryString((short) (a >> ub)));

    // Rotations
    int rol = (ua << ub) | ((ua >> (16 - ub)) & 0xFFFF);
    int ror = ((ua >> ub) & 0xFFFF) | (ua << (16 - ub));
    System.out.printf("rol: %016s%n", Integer.toBinaryString(rol));
    System.out.printf("ror: %016s%n", Integer.toBinaryString(ror));
  }

  public static void main(String[] args) {
    int a = -460;
    int b = 6;
    bitwise(a, b);
  }
}
