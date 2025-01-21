public class Bitwise {
  public static void bitwise(int a, int b) {
    System.out.println("a AND b: " + (a & b));
    System.out.println("a OR b: " + (a | b));
    System.out.println("a XOR b: " + (a ^ b));
    System.out.println("NOT a: " + ~a);

    // Java does not have bitwise NOT for a single number.
    // Instead, it negates the integer value.
    System.out.println("~a: " + -a);

    System.out.println("a << b: " + (a << b)); // left shift
    System.out.println("a >> b: " + (a >> b)); // arithmetic right shift
    System.out.println("a >>> b: " + (a >>> b)); // logical right shift

    // Java does not support bitwise rotation natively, so you need to calculate it manually.
    System.out.println("Left rotate by b: " + leftRotate(a, b));
    System.out.println("Right rotate by b: " + rightRotate(a, b));
  }

  static int leftRotate(int n, int d) {
    return (n << d) | (n >> (32 - d));
  }

  static int rightRotate(int n, int d) {
    return (n >> d) | (n << (32 - d));
  }
}
