public class BitwiseOperations {
  public static void main(String[] args) {
    bitwise(5, 3); // Example values for a and b
  }

  public static void bitwise(int a, int b) {
    System.out.println("a AND b: " + (a & b));
    System.out.println("a OR b: " + (a | b));
    System.out.println("a XOR b: " + (a ^ b));
    System.out.println("NOT a: " + (~a));
    System.out.println("a << b: " + (a << b)); // left shift
    System.out.println("a >> b: " + (a >> b)); // arithmetic right shift
    System.out.println("a >>> b: " + (a >>> b)); // logical right shift
  }
}
