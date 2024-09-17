public class BitwiseOperations {
  public static void main(String[] args) {
    int a = 5;
    int b = 3;

    System.out.println("a AND b: " + (a & b)); // Output: a AND b: 1
    System.out.println("a OR b: " + (a | b)); // Output: a OR b: 7
    System.out.println("a XOR b: " + (a ^ b)); // Output: a XOR b: 6
    System.out.println("NOT a: " + ~a); // Output: NOT a: -6
    System.out.println("a << b: " + (a << b)); // Output: a << b: 20
    System.out.println("a >> b: " + (a >> b)); // Output: a >> b: 1
    System.out.println("a >>> b: " + (a >>> b)); // Output: a >>> b: 1
  }
}
