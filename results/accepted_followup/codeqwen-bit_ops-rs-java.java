public class Main {
  public static void main(String[] args) {
    long A = 105;
    long b = 91;
    System.out.printf("A      = %08d%n", A);
    System.out.printf("b      = %08d%n", b);
    System.out.printf("A | b  = %08d%n", A | b);
    System.out.printf("A & b  = %08d%n", A & b);
    System.out.printf("A ^ b  = %08d%n", A ^ b);
    System.out.printf("!A     = %08d%n", ~A);
    System.out.printf("A << 3 = %08d%n", A << 3);
    System.out.printf("A >> 3 = %08d%n", A >> 3);
    System.out.printf("A >>> 3 = %08d%n", A >>> 3);
    System.out.printf("A <<< 1 = %08d%n", A << 1);
    System.out.printf("A >>> 1 = %08d%n", A >>> 1);
  }
}
