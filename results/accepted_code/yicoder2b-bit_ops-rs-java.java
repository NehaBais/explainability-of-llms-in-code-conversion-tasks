public class Main {

  public static void main(String[] args) {
    byte a = (byte) 105;
    byte b = (byte) 91;

    System.out.println("a      = " + Integer.toBinaryString(a));
    System.out.println("b      = " + Integer.toBinaryString(b));
    System.out.println("a | b  = " + Integer.toBinaryString(a | b));
    System.out.println("a & b  = " + Integer.toBinaryString(a & b));
    System.out.println("a ^ b  = " + Integer.toBinaryString(a ^ b));
    System.out.println("!a     = " + Integer.toBinaryString(~a));
    int leftShift = a << 3;
    System.out.println("a << 3 = " + Integer.toBinaryString(leftShift));
    int rightShift = a >> 3;
    System.out.println("a >> 3 = " + Integer.toBinaryString(rightShift));
  }
}
