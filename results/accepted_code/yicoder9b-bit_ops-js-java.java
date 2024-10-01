public class Main {
  public static void main(String[] args) {
    int a = 15; // Test value, can be any integer you prefer
    int b = 2; // Shift/rotate amount, can be any integer you prefer
    bitwise(a, b);
  }

  public static void bitwise(int a, int b) {
    System.out.println("a AND b: " + (a & b));
    System.out.println("a OR b: " + (a | b));
    System.out.println("a XOR b: " + (a ^ b));
    System.out.println("NOT a: " + ~a);
    System.out.println("a << b: " + (a << b)); // left shift
    System.out.println("a >> b: " + (a >> b)); // arithmetic right shift
    System.out.println("a >>> b: " + (a >>> b)); // logical right shift

    int sizeOfInt = Integer.SIZE; // Get number of bits in an integer
    b %= sizeOfInt; // Ensure shift amount is within valid range

    int rightRotate = (a >>> b) | (a << (sizeOfInt - b));
    System.out.println("a rotated to the right by b bits: " + rightRotate);

    int leftRotate = (a << b) | (a >>> (sizeOfInt - b));
    System.out.println("a rotated to the left by b bits : " + leftRotate);
  }
}
