public class Main {
  public static void main(String[] args) {
    byte a = 105;
    byte b = 91;
    System.out.println("a      = " + String.format("%08b", a));
    System.out.println("b      = " + String.format("%08b", b));
    System.out.println("a | b  = " + String.format("%08b", (byte) (a | b)));
    System.out.println("a & b  = " + String.format("%08b", (byte) (a & b)));
    System.out.println("a ^ b  = " + String.format("%08b", (byte) (a ^ b)));
    System.out.println("!a     = " + String.format("%08b", ~a));
    System.out.println("a << 3 = " + String.format("%08b", (byte) (a << 3)));
    System.out.println("a >> 3 = " + String.format("%08b", (byte) (a >> 3)));
    System.out.println("a >>> 3 = " + String.format("%08b", (byte) (a >>> 3)));
    System.out.println("a.rotateLeft(3) = " + String.format("%08b", a.rotateLeft(3)));
    System.out.println("a.rotateRight(3) = " + String.format("%08b", a.rotateRight(3)));
  }
}
