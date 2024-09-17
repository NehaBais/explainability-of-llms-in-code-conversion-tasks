public class BitwiseBuiltIns {

  public static void main(String[] args) {
    int width = 8;
    int a = 27, b = 125;
    int mask = (1 << width) - 1;
    System.out.printf(
        """
    AND:     0b%0%dw
           & 0b%0%dw
           = 0b%0%dw

    OR:      0b%0%dw
           | 0b%0%dw
           = 0b%0%dw

    XOR:     0b%0%dw
           ^ 0b%0%dw
           = 0b%0%dw

    NOT:   ~ 0b%0%dw
           = 0b%0%dw

    SHIFTS

      RIGHT:   0b%0%dw >> 1
             = 0b%0%dw

        LEFT:    0b%0%dw << 1
             = 0b%0%dw
""",
        a, width, b, width, a, width, (a >> 1) & mask, width, a, width, (a << 1) & mask);

    System.out.printf(
        """
    ROTATIONS

      RIGHT:   rotr(%d, 0b%0%dw, 1)
               =       0b%0%dw
               rotr(%d, 0b%0%dw, 2)
               =       0b%0%dw
               rotr(%d, 0b%0%dw, 4)
               =       0b%0%dw

        LEFT:    rotl(%d, 0b%0%dw, 1)
               =       0b%0%dw
               rotl(%d, 0b%0%dw, 2)
               =       0b%0%dw
               rotl(%d, 0b%0%dw, 4)
               =       0b%0%dw

    SIGN-EXTENDING ARITHMETIC SHIFT RIGHT

               asr(%d, 0b%0%dw, 1)
               =      0b%0%dw
               asr(%d, 0b%0%dw, 2)
               =      0b%0%dw
               asr(%d, 0b%0%dw, 4)
               =      0b%0%dw
""",
        width, a, width, b, width, a, width, b, width, a, width, b);
  }
}
