public class BitwiseOperations {
  public static void main(String[] args) {
    int a = 105;
    int b = 91;

    System.out.println("a      = " + Integer.toBinaryString(a));
    System.out.println("b      = " + Integer.toBinaryString(b));
    System.out.println("a | b  = " + Integer.toBinaryString(a | b));
    System.out.println("a & b  = " + Integer.toBinaryString(a & b));
    System.out.println("a ^ b  = " + Integer.toBinaryString(a ^ b));
    System.out.println("!a     = " + Integer.toBinaryString(!a));
    System.out.println("a << 3 = " + Integer.toBinaryString(a << 3));
    System.out.println("a >> 3 = " + Integer.toBinaryString(a >> 3));

    int c = ~a;
    System.out.println("~a     = " + Integer.toBinaryString(c));

    int d = a << b;
    System.out.println("a << b = " + Integer.toBinaryString(d));

    d >>= b;
    System.out.println("a >> b = " + Integer.toBinaryString(d));

    d >>>= b;
    System.out.println("a >>> b = " + Integer.toBinaryString(d));

    d <<= b;
    System.out.println("a << b = " + Integer.toBinaryString(d));

    d >>= b;
    System.out.println("a >> b = " + Integer.toBinaryString(d));
  }
}
