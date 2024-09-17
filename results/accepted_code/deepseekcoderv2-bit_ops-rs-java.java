public class Main {
  public static void main(String[] args) {
    int a = 105;
    int b = 91;
    System.out.printf("a      = %8s\n", Integer.toBinaryString(a));
    System.out.printf("b      = %8s\n", Integer.toBinaryString(b));
    System.out.printf("a | b  = %8s\n", Integer.toBinaryString(a | b));
    System.out.printf("a & b  = %8s\n", Integer.toBinaryString(a & b));
    System.out.printf("a ^ b  = %8s\n", Integer.toBinaryString(a ^ b));
    System.out.printf("!a     = %8s\n", Integer.toBinaryString(!a));
    System.out.printf("a << 3 = %8s\n", Integer.toBinaryString(a << 3));
    System.out.printf("a >> 3 = %8s\n", Integer.toBinaryString(a >> 3));
  }
}
