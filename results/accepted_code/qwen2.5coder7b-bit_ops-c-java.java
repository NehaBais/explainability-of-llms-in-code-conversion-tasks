public class BitwiseOperations {

  public static void bitwise(int a, int b) {
    System.out.println("a and b: " + (a & b));
    System.out.println("a or b: " + (a | b));
    System.out.println("a xor b: " + (a ^ b));
    System.out.println("not a: " + (~a));

    // Left shift
    System.out.println("a << n: " + (a << b));

    // Right shift
    System.out.println("a >> n: " + (a >> b));

    // Convert signed integer to unsigned for logical right shift
    int c = a;
    System.out.println("c >>> b: " + (c >>> b));
  }

  public static void main(String[] args) {
    bitwise(5, 2); // Example call with a=5 and b=2
  }
}
