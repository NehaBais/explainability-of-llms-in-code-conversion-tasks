public class BitwiseOperations {

  public static void bitwise(int a, int b) {
    System.out.println("a and b: " + (a & b));
    System.out.println("a or b: " + (a | b));
    System.out.println("a xor b: " + (a ^ b));
    System.out.println("not a: " + ~a);

    System.out.println("a shl b: " + (a << b));
    System.out.println("a shr b: " + (a >> b));
    System.out.println("a lsr b: " + (a >>> b));

    int ua = a;
    System.out.println("a rol b: " + Integer.rotateLeft(ua, b));
    System.out.println("a ror b: " + Integer.rotateRight(ua, b));
  }
}
