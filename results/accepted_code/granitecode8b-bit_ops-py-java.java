public class BitwiseBuiltIns {
  public static void main(String[] args) {
    bitwiseBuiltIns(8, 27, 125);
    helperFuncs(8, 27);
  }

  public static void bitwiseBuiltIns(int width, int a, int b) {
    int mask = (1 << width) - 1;
    System.out.println(
        "    AND:     0b"
            + Integer.toBinaryString(a).toUpperCase()
            + " "
            + "& 0b"
            + Integer.toBinaryString(b).toUpperCase()
            + " "
            + "= 0b"
            + Integer.toBinaryString((a & b) & mask).toUpperCase());

    System.out.println(
        "    OR:      0b"
            + Integer.toBinaryString(a).toUpperCase()
            + " "
            + "| 0b"
            + Integer.toBinaryString(b).toUpperCase()
            + " "
            + "= 0b"
            + Integer.toBinaryString((a | b) & mask).toUpperCase());

    System.out.println(
        "    XOR:     0b"
            + Integer.toBinaryString(a).toUpperCase()
            + " "
            + "^ 0b"
            + Integer.toBinaryString(b).toUpperCase()
            + " "
            + "= 0b"
            + Integer.toBinaryString((a ^ b) & mask).toUpperCase());

    System.out.println(
        "    NOT:   ~ 0b"
            + Integer.toBinaryString(a).toUpperCase()
            + " "
            + "= 0b"
            + Integer.toBinaryString((~a) & mask).toUpperCase());

    System.out.println("    SHIFTS");

    System.out.println(
        "      RIGHT:   0b"
            + Integer.toBinaryString(a).toUpperCase()
            + " >> 1"
            + " = 0b"
            + Integer.toBinaryString((a >> 1) & mask).toUpperCase());

    System.out.println(
        "      LEFT:    0b"
            + Integer.toBinaryString(a).toUpperCase()
            + " << 1"
            + " = 0b"
            + Integer.toBinaryString((a << 1) & mask).toUpperCase());
  }

  public static int rotr(int width, int a, int n) {
    // Rotate a, n times to the right
    if (n < 0) {
      return rotl(width, a, -n);
    } else if (n == 0) {
      return a;
    } else {
      int mask = (1 << width) - 1;
      a = a & mask;
      n = n % width;
      return ((a >> n) // Shift right by n bits
              | (a << (width - n)))
          & mask; // Rotate left by n bits
    }
  }

  public static int rotl(int width, int a, int n) {
    // Rotate a, n times to the left
    if (n < 0) {
      return rotr(width, a, -n);
    } else if (n == 0) {
      return a;
    } else {
      int mask = (1 << width) - 1;
      a = a & mask;
      n = n % width;
      return ((a << n) // Shift left by n bits
              | (a >> (width - n)))
          & mask; // Rotate right by n bits
    }
  }

  public static int asr(int width, int a, int n) {
    // Sign-extending arithmetic shift right
    if (n < 0) {
      return asl(width, a, -n);
    } else if (n == 0) {
      return a;
    } else {
      int mask = (1 << width) - 1;
      a = a & mask;
      n = n % width;
      int signBit = (a >> (width - 1)) & 1; // Get the sign bit
      int result =
          ((a >> n) // Shift right by n bits
                  | (signBit << (width - n)))
              & mask; // Add sign bit to the left
      return result;
    }
  }

  public static int asl(int width, int a, int n) {
    // Sign-extending arithmetic shift left
    if (n < 0) {
      return asr(width, a, -n);
    } else if (n == 0) {
      return a;
    } else {
      int mask = (1 << width) - 1;
      a = a & mask;
      n = n % width;
      int signBit = (a >> (width - 1)) & 1; // Get the sign bit
      int result =
          ((a << n) // Shift left by n bits
                  | (signBit >> (width - n)))
              & mask; // Add sign bit to the right
      return result;
    }
  }

  public static void helperFuncs(int width, int a) {
    System.out.println("    SIGN-EXTENDING ARITHMETIC SHIFT RIGHT");

    System.out.println(
        "               asr("
            + width
            + ", 0b"
            + Integer.toBinaryString(a).toUpperCase()
            + ", 1)"
            + " =      0b"
            + Integer.toBinaryString(asr(width, a, 1)).toUpperCase());

    System.out.println(
        "               asr("
            + width
            + ", 0b"
            + Integer.toBinaryString(a).toUpperCase()
            + ", 2)"
            + " =      0b"
            + Integer.toBinaryString(asr(width, a, 2)).toUpperCase());

    System.out.println(
        "               asr("
            + width
            + ", 0b"
            + Integer.toBinaryString(a).toUpperCase()
            + ", 4)"
            + " =      0b"
            + Integer.toBinaryString(asl(width, a, 4)).toUpperCase());
  }
}
