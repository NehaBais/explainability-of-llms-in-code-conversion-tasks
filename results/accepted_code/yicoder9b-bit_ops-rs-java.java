public class Main {
  static int a = 105;
  static int b = 91;

  public static void main(String[] args) {
    System.out.println(
        "a      = " + String.format("%8s", Integer.toBinaryString(a)).replace(' ', '0'));
    System.out.println(
        "b      = " + String.format("%8s", Integer.toBinaryString(b)).replace(' ', '0'));
    System.out.println(
        "a | b  = " + String.format("%8s", Integer.toBinaryString(a | b)).replace(' ', '0'));
    System.out.println(
        "a & b  = " + String.format("%8s", Integer.toBinaryString(a & b)).replace(' ', '0'));
    System.out.println(
        "a ^ b  = " + String.format("%8s", Integer.toBinaryString(a ^ b)).replace(' ', '0'));
    System.out.println(
        "~a     = " + String.format("%8s", Integer.toBinaryString(~a)).replace(' ', '0'));
    System.out.println(
        "a << 3 = " + String.format("%8s", Integer.toBinaryString(a << b)).replace(' ', '0'));
    System.out.println(
        "a >> 3 = " + String.format("%8s", Integer.toBinaryString(a >> b)).replace(' ', '0'));
  }
}
