public class Main {
  static final int WIDTH = 8; // Bit width used for printing purposes.

  public static void main(String[] args) {
    bitwiseBuiltIns((byte) WIDTH, (byte) 27, (byte) 125);
    helperFuncs((byte) WIDTH, (byte) 27);
  }

  static void bitwiseBuiltIns(int width, int a, int b) {
    int mask = (1 << width) - 1;
    a &= mask;
    b &= mask;
    System.out.printf(
        "AND:     0b%08s\n       & 0b%08s\n      = 0b%08s\n\n",
        Integer.toBinaryString(a),
        Integer.toBinaryString(b),
        Integer.toBinaryString((a & b) & mask));

    System.out.printf(
        "OR:       0b%08s\n      | 0b%08s\n      = 0b%08s\n\n",
        Integer.toBinaryString(a),
        Integer.toBinaryString(b),
        Integer.toBinaryString((a | b) & mask));

    System.out.printf(
        "XOR:      0b%08s\n     ^ 0b%08s\n      = 0b%08s\n\n",
        Integer.toBinaryString(a),
        Integer.toBinaryString(b),
        Integer.toBinaryString((a ^ b) & mask));

    System.out.printf(
        "NOT A:   ~ 0b%08s\n      = 0b%08s\n\n",
        Integer.toBinaryString(a), Integer.toBinaryString(~a & mask));
  }

  static void helperFuncs(int width, int a) {
    int mask = (1 << width) - 1;
    System.out.printf(
        "ROTATE RIGHT:\nrotr(%d, 0b%08s, 1) => 0b%08s\nrotr(%d, 0b%08s, 2) => "
            + "0b%08s\nrotr(%d, 0b%08s, 4) => 0b%08s\n\n",
        width,
        Integer.toBinaryString(a),
        Integer.toBinaryString((a >>> 1) | (a << (width - 1))) & mask,
        width,
        Integer.toBinaryString(a),
        Integer.toBinaryString((a >>> 2) | (a << (width - 2))) & mask,
        width,
        Integer.toBinaryString(a),
        Integer.toBinaryString((a >>> 4) | (a << (width - 4))) & mask);
  }
}
