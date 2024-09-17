public class Main {
  public static void main(String[] args) {
    int a = 105;
    int b = 91;
    System.out.printf("a      = %08d%n", a);
    System.out.printf("b      = %08d%n", b);
    System.out.printf("a | b  = %08d%n", a | b);
    System.out.printf("a & b  = %08d%n", a & b);
    System.out.printf("a ^ b  = %08d%n", a ^ b);
    System.out.printf("!a     = %08d%n", ~a);
    System.out.printf("a << 3 = %08d%n", a << 3);
    System.out.printf("a >> 3 = %08d%n", a >> 3);
  }
}
