public class BitwiseOperations {
  public static void main(String[] args) {
    int a = 10; // Example values for a and b
    int b = 5;
    bitwise(a, b);
  }

  public static void bitwise(int a, int b) {
    System.out.println("a and b: " + (a & b));
    System.out.println("a or b: " + (a | b));
    System.out.println("a xor b: " + (a ^ b));
    System.out.println("not a: " + (~a));
    System.out.println("a << b: " + (a << b)); // Left shift
    System.out.println("a >> b: " + (a >> b)); // Arithmetic right shift on most platforms
    // Logical right shift for Java, as there's no specific rotation operator
    int c = a;
    System.out.println("c >> b: " + ((int) c >>> b)); // Logical right shift
  }
}
