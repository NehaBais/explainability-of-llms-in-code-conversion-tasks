public class Main {
  public static void main(String[] args) {
    int a = 15; // For example
    int b = 3; // For example

    bitwiseOperation(a, b);
  }

  private static void bitwiseOperation(int a, int b) {
    System.out.println("a and b: " + (a & b));
    System.out.println("a or b:  " + (a | b));
    System.out.println("a xor b: " + (a ^ b));
    System.out.println("not a:   " + ~a);

    // Java does not support the left-shift operator on negative numbers or with shift counts
    // greater or equal to
    // the number of bits in an integer. But as it's guaranteed to work for positive values, no need
    // to check for that case.
    System.out.println("a shl b: " + (a << b));

    int ua = a;
    System.out.println("a shr b: " + (a >> b));
    System.out.println(
        "a lsr b: "
            + (ua
                >>> b)); // Java's logical right shift, guaranteed to work for all rotation amounts.

    int ua = a;
    System.out.println("a rol b: " + Integer.rotateLeft(ua, b));
    System.out.println("a ror b: " + Integer.rotateRight(ua, b));
  }
}
