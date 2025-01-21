public class Main {
  public static void main(String[] args) {
    int a = 105;
    int b = 91;

    System.out.println("a      = " + Integer.toBinaryString(a));
    System.out.println("b      = " + Integer.toBinaryString(b));

    int orResult = a | b;
    int andResult = a & b;
    int xorResult = a ^ b;

    System.out.println("a | b  = " + Integer.toBinaryString(orResult));
    System.out.println("a & b  = " + Integer.toBinaryString(andResult));
    System.out.println("a ^ b  = " + Integer.toBinaryString(xorResult));

    int notA = ~a;

    System.out.println("!a     = " + Integer.toBinaryString(notA));

    int leftShift = a << 3;
    int rightShift = a >> 3;
    int leftRotate = (a * 0x1) % 256; // Assuming shift by 3 bits
    int rightRotate = ((a & 0xff) << 8) | (a >>> 8); // Assuming rotation by 3 bits

    System.out.println("a << 3 = " + Integer.toBinaryString(leftShift));
    System.out.println("a >> 3 = " + Integer.toBinaryString(rightShift));
    System.out.println("Left rotate: " + Integer.toBinaryString(leftRotate));
    System.out.println("Right rotate: " + Integer.toBinaryString(rightRotate));
  }
}
