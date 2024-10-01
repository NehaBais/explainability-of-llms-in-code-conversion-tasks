public class Main {
  static int mask = (1 << 3) - 1; // mask for bits in the width

  // Perform bitwise AND, OR and XOR on two integers.
  static void bitwise_built_ins(int a, int b) {
    System.out.println("AND:     0b" + Integer.toBinaryString((a & b)));
    System.out.println("OR:      0b" + Integer.toBinaryString((a | b)));
    System.out.println("XOR:     0b" + Integer.toBinaryString((a ^ b)));
  }

  // Perform bitwise NOT on first integer.
  static void not_on_first() {
    int a = 27; // given value
    System.out.println("NOT:   ~ 0b" + Integer.toBinaryString(a));
  }

  // Perform shifts and rotations on the first integer with shift/rotate amount of second integer.
  static void shift_and_rotate(int a, int b) {
    System.out.println("RIGHT:   0b" + Integer.toBinaryString((a >> b)));
    System.out.println("LEFT:    0b" + Integer.toBinaryString((a << b)));
  }

  // Helper method for testing bitwise operations and shifts/rotations.
  static void helper_funcs() {
    int a = 27;
    System.out.println(
        "SIGN-EXTENDING ARITHMETIC SHIFT RIGHT \n               asr(0b"
            + Integer.toBinaryString((a))
            + ", 1)       =      0b"
            + Integer.toBinaryString((asr(a, 1)))
            + "\n               asr(0b"
            + Integer.toBinaryString((a))
            + ", 2) \n                  =      0b"
            + Integer.toBinaryString((asr(a, 2)))
            + "\n               asr(0b"
            + Integer.toBinaryString((a))
            + ", 4) \n                  =      0b"
            + Integer.toBinaryString((asr(a, 4))));
    System.out.println(
        "RIGHT rotation and LEFT shift operations should yield similar results as in Python.\n"
            + "               rotl(0b"
            + Integer.toBinaryString((a))
            + ", 1)       =      0b"
            + Integer.toBinaryString((rotl(a, 1)))
            + "\n               rotl(0b"
            + Integer.toBinaryString((a))
            + ", 2) \n                  =      0b"
            + Integer.toBinaryString((rotl(a, 2)))
            + "\n               rotl(0b"
            + Integer.toBinaryString((a))
            + ", 4) \n                  =      0b"
            + Integer.toBinaryString((rotl(a, 4))));
  }

  // Perform rotations on integer with specified amount of bits.
  static int rotl(int val, int shift) {
    return (val << shift) | (val >>> (32 - shift));
  }

  // Perform arithmetic shifts on integer with specified amount of signed bits.
  static int asr(int val, int shift) {
    return (val >> shift) | (-((val << (31 - shift)) & mask));
  }

  public static void main(String[] args) {
    bitwise_built_ins(27, 125); // replace with your values
    not_on_first(); // test for bitwise NOT on first integer
    helper_funcs(); // run tests to verify shift and rotate operations
  }
}
