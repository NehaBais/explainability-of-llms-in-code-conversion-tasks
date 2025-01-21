public class BitwiseOperations {
  public static void main(String[] args) {
    int a = 105;
    int b = 91;

    System.out.printf("a      = %08s%n", Integer.toBinaryString(a));
    System.out.printf("b      = %08s%n", Integer.toBinaryString(b));
    System.out.printf("a | b  = %08s%n", Integer.toBinaryString(a | b));
    System.out.printf("a & b  = %08s%n", Integer.toBinaryString(a & b));
    System.out.printf("a ^ b  = %08s%n", Integer.toBinaryString(a ^ b));

    // Bitwise NOT is not directly supported in Java for integers, but you can use the complement
    // operation
    int notA = ~a;
    System.out.printf("!a     = %08s%n", Integer.toBinaryString(notA));

    // Left shift
    int leftShiftedA = a << 3;
    System.out.printf("a << 3 = %08s%n", Integer.toBinaryString(leftShiftedA));

    // Right shift (logical)
    int rightShiftedA = a >> 3;
    System.out.printf("a >> 3 = %08s%n", Integer.toBinaryString(rightShiftedA));

    // Right arithmetic shift is the same as logical shift in Java for signed integers
  }
}
