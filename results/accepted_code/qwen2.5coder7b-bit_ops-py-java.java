public class BitwiseOperations {
  public static void main(String[] args) {
    int width = 8;
    int a = 27;
    int b = 125;

    bitwiseBuiltIns(width, a, b);

    int aa = a | (1 << (width - 1));
    helperFuncs(width, a);
  }

  static void bitwiseBuiltIns(int width, int a, int b) {
    int mask = (1 << width) - 1;
    System.out.println(
        String.format(
            "AND:     0b%0"
                + width
                + "d\n"
                + "       & 0b%0"
                + width
                + "d\n"
                + "= 0b%0"
                + width
                + "d",
            a,
            b,
            (a & b) & mask));

    System.out.println(
        String.format(
            "OR:      0b%0"
                + width
                + "d\n"
                + "       | 0b%0"
                + width
                + "d\n"
                + "= 0b%0"
                + width
                + "d",
            a,
            b,
            (a | b) & mask));

    System.out.println(
        String.format(
            "XOR:     0b%0"
                + width
                + "d\n"
                + "       ^ 0b%0"
                + width
                + "d\n"
                + "= 0b%0"
                + width
                + "d",
            a,
            b,
            (a ^ b) & mask));

    System.out.println(
        String.format("NOT:   ~ 0b%0" + width + "d\n" + "= 0b%0" + width + "d", a, (~a) & mask));

    System.out.println("\nSHIFTS");

    System.out.println(
        String.format(
            "      RIGHT:   0b%0" + width + "d >> 1\n" + "             = 0b%0" + width + "d",
            a,
            (a >> 1) & mask));

    System.out.println(
        String.format(
            "      LEFT:    0b%0" + width + "d << 1\n" + "             = 0b%0" + width + "d",
            a,
            (a << 1) & mask));
  }

  static int rotr(int width, int a, int n) {
    if (n < 0) {
      return rotl(width, a, -n);
    } else if (n == 0) {
      return a;
    } else {
      int mask = (1 << width) - 1;
      a &= mask;
      n %= width;
      return ((a >> n) | (a << (width - n))) & mask;
    }
  }

  static int rotl(int width, int a, int n) {
    if (n < 0) {
      return rotr(width, a, -n);
    } else if (n == 0) {
      return a;
    } else {
      int mask = (1 << width) - 1;
      a &= mask;
      n %= width;
      return ((a << n) | (a >> (width - n))) & mask;
    }
  }

  static int asr(int width, int a, int n) {
    if (n < 0) {
      throw new IllegalArgumentException("Negative shift value is not allowed.");
    } else if (n == 0) {
      return a;
    } else {
      int signBit = (a >> (width - 1)) & 1;
      int mask = (1 << width) - 1;

      if (signBit == 1) {
        return ((~(mask >>> n)) & a) | (mask & (1 << (width - n)));
      } else {
        return a >> n;
      }
    }
  }

  static void helperFuncs(int width, int a) {
    int aa = a | (1 << (width - 1));
    System.out.println("\nSIGN-EXTENDING ARITHMETIC SHIFT RIGHT");

    for (int n = 1; n <= 4; n++) {
      System.out.println(
          String.format(
              "               asr(%d, 0b%0"
                  + width
                  + "d, %d)\n"
                  + "               =      0b%0"
                  + width
                  + "d",
              width,
              a,
              n,
              asr(width, a, n)));
    }

    for (int n = 1; n <= 4; n++) {
      System.out.println(
          String.format(
              "               asr(%d, 0b%0"
                  + width
                  + "d, %d)\n"
                  + "               =      0b%0"
                  + width
                  + "d",
              width,
              aa,
              n,
              asr(width, aa, n)));
    }
  }
}
