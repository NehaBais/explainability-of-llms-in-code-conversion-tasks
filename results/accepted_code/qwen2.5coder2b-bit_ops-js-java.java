public class BitwiseOperations {
  public static void main(String[] args) {
    int a = 10;
    int b = 3;

    System.out.println("a AND b: " + (a & b));
    System.out.println("a OR b: " + (a | b));
    System.out.println("a XOR b: " + (a ^ b));

    // Not operation in Java is done using '~' operator
    System.out.println("NOT a: " + ~a);

    // Left shift operation in Java uses '<<' operator
    System.out.println("a << b: " + (a << b));

    // Right shift operations in Java use '>>' and '>>>'
    System.out.println("a >> b: " + (a >> b));
    System.out.println("a >>> b: " + (a >>> b));
  }
}
