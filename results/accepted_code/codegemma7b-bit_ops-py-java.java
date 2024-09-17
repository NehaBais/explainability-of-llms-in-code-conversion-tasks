public class BitwiseOperations {

  public static void bitwiseBuiltIns(int width, int a, int b) {
    int mask = (1 << width) - 1;

    System.out.println("AND:");
    System.out.println(
        "    0b"
            + Integer.toBinaryString(a)
            + " & 0b"
            + Integer.toBinaryString(b)
            + " = 0b"
            + Integer.toBinaryString((a & b) & mask));

    System.out.println("OR:");
    System.out.println(
        "    0b"
            + Integer.toBinaryString(a)
            + " | 0b"
            + Integer.toBinaryString(b)
            + " = 0b"
            + Integer.toBinaryString((a | b) & mask));

    System.out.println("XOR:");
    System.out.println(
        "    0b"
            + Integer.toBinaryString(a)
            + " ^ 0b"
            + Integer.toBinaryString(b)
            + " = 0b"
            + Integer.toBinaryString((a ^ b) & mask));

    System.out.println("NOT:");
    System.out.println(
        "    ~0b" + Integer.toBinaryString(a) + " = 0b" + Integer.toBinaryString(~a & mask));

    System.out.println("SHIFTS:");

    System.out.println(
        "      RIGHT: 0b"
            + Integer.toBinaryString(a)
            + " >> 1 = 0b"
            + Integer.toBinaryString((a >> 1) & mask));
    System.out.println(
        "      LEFT: 0b"
            + Integer.toBinaryString(a)
            + " << 1 = 0b"
            + Integer.toBinaryString((a << 1) & mask));
  }

  public static int rotr(int width, int a, int n) {
    if (n < 0) {
      return rotl(width, a, -n);
    } else if (n == 0) {
      return a;
    } else {
      return (a >>> (width - n)) | (a << n);
    }
  }

  public static int rotl(int width, int a, int n) {
    if (n < 0) {
      return rotr(width, a, -n);
    } else if (n == 0) {
      return a;
    } else {
      return (a << n) | (a >>> (width - n));
    }
  }

  public static int asr(int width, int a, int n) {
    if (n < 0) {
      return asr(width, a, -n);
    } else if (n == 0) {
      return a;
    } else {
      return (a >>> n);
    }
  }

  public static void helperFuncs(int width, int a) {
    System.out.println("ROTATIONS:");

    System.out.println(
        "      LEFT: 0b"
            + Integer.toBinaryString(a)
            + " = 0b"
            + Integer.toBinaryString(rotl(width, a, 1)));
    System.out.println(
        "      LEFT: 0b"
            + Integer.toBinaryString(a)
            + " = 0b"
            + Integer.toBinaryString(rotl(width, a, 2)));
    System.out.println(
        "      LEFT: 0b"
            + Integer.toBinaryString(a)
            + " = 0b"
            + Integer.toBinaryString(rotl(width, a, 4)));

    System.out.println("SIGN-EXTENDING ARITHMETIC SHIFT RIGHT:");

    System.out.println(
        "      RIGHT: 0b"
            + Integer.toBinaryString(a)
            + " = 0b"
            + Integer.toBinaryString(asr(width, a, 1)));
    System.out.println(
        "      RIGHT: 0b"
            + Integer.toBinaryString(a)
            + " = 0b"
            + Integer.toBinaryString(asr(width, a, 2)));
    System.out.println(
        "      RIGHT: 0b"
            + Integer.toBinaryString(a)
            + " = 0b"
            + Integer.toBinaryString(asr(width, a, 4)));
  }

  public static void main(String[] args) {
    bitwiseBuiltIns(8, 27, 125);
    helperFuncs(8, 27);
  }
}
