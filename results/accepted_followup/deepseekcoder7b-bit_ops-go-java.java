public class Main {
  public static void main(String[] args) {
    short a = -460, b = 6;

    System.out.printf(
        "a:    %16s\n", Integer.toBinaryString(Short.toUnsignedInt(a)).replace(' ', '0'));
    System.out.printf(
        "b:    %16s\n", Integer.toBinaryString(Short.toUnsignedInt(b)).replace(' ', '0'));

    if (b < 0) {
      System.err.println(
          "Right operand is negative, but all shifts require an unsigned right operand  (shift"
              + " distance).");
      return;
    }
    int ua = Short.toUnsignedInt(a);
    int ub = b;

    System.out.printf("shl:  %16s\n", Integer.toBinaryString(ua << ub).replace(' ', '0'));
    System.out.printf("shr:  %16s\n", Integer.toBinaryString(ua >> ub).replace(' ', '0'));
    System.out.printf("las:  %16s\n", Integer.toBinaryString(ua << ub).replace(' ', '0'));
  }
}
