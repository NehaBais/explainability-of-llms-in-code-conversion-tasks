public class Main {
  public static void main(String[] args) {
    byte a = 105;
    byte b = 91;

    System.out.println(
        "a      = " + String.format("%8s", Integer.toBinaryString(a & 0xFF)).replace(' ', '0'));
    System.out.println(
        "b      = " + String.format("%8s", Integer.toBinaryString(b & 0xFF)).replace(' ', '0'));
    System.out.println(
        "a | b  = "
            + String.format("%8s", Integer.toBinaryString((a | b) & 0xFF)).replace(' ', '0'));
    System.out.println(
        "a & b  = "
            + String.format("%8s", Integer.toBinaryString((a & b) & 0xFF)).replace(' ', '0'));
    System.out.println(
        "a ^ b  = "
            + String.format("%8s", Integer.toBinaryString((a ^ b) & 0xFF)).replace(' ', '0'));
    System.out.println(
        "!a     = "
            + String.format(
                    "%8s", Integer.toBinaryString(~a & 0xFF).replace('1', 'x').replace('-', '1'))
                .replace('x', '0'));
    System.out.println(
        "a << 3 = "
            + String.format("%8s", Integer.toBinaryString((a << 3) & 0xFF)).replace(' ', '0'));
    System.out.println(
        "a >> 3 = "
            + String.format("%8s", Integer.toBinaryString(a >> 3 & 0xFF)).replace(' ', '0'));
    System.out.println(
        "a >>> 3 = "
            + String.format("%8s", Integer.toBinaryString((a >>> 3) & 0xFF)).replace(' ', '0'));

    // Rotate left
    byte tempA1 = (byte) ((a << 3) | (a >> (8 - 3)));
    System.out.println(
        "Left rotate a by 3 bits = "
            + String.format("%8s", Integer.toBinaryString(tempA1 & 0xFF)).replace(' ', '0'));

    // Rotate right
    byte tempA2 = (byte) ((a >> 3) | (a << (8 - 3)));
    System.out.println(
        "Right rotate a by 3 bits = "
            + String.format("%8s", Integer.toBinaryString(tempA2 & 0xFF)).replace(' ', '0'));
  }
}
