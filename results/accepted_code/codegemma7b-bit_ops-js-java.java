public class BitwiseOperations {

  public static void bitwise(int a, int b) {
    System.out.println("a & b: " + (a & b)); // bitwise AND
    System.out.println("a | b: " + (a | b)); // bitwise OR
    System.out.println("a ^ b: " + (a ^ b)); // bitwise XOR
    System.out.println("~a: " + ~a); // bitwise NOT
    System.out.println("a << b: " + (a << b)); // left shift
    System.out.println("a >> b: " + (a >> b)); // arithmetic right shift
    System.out.println("a >>> b: " + (a >>> b)); // logical right shift
  }
}
