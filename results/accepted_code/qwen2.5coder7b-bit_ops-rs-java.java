public class Main {
  public static void main(String[] args) {
    int a = 105;
    int b = 91;

    System.out.printf("a      = %8s%n", Integer.toBinaryString(a));
    System.out.printf("b      = %8s%n", Integer.toBinaryString(b));
    System.out.printf("a | b  = %8s%n", Integer.toBinaryString(a | b));
    System.out.printf("a & b  = %8s%n", Integer.toBinaryString(a & b));
    System.out.printf("a ^ b  = %8s%n", Integer.toBinaryString(a ^ b));
    System.out.printf("!a     = %8s%n", Integer.toBinaryString(~a));

    // Java does not support shifting negative numbers
    if (b >= 0) {
      System.out.printf("a << b = %8s%n", Integer.toBinaryString(a << b));
      System.out.printf("a >> b = %8s%n", Integer.toBinaryString(a >> b));
    } else {
      int shift = Math.abs(b);
      System.out.printf("a >>> b= %8s%n", Integer.toBinaryString(a >>> shift));
    }

    // Java does not support rotating
  }
}
