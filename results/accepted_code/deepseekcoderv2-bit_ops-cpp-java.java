import java.util.Scanner;

public class BitwiseOperations {
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);

    System.out.print("Enter first integer (a): ");
    int a = scanner.nextInt();

    System.out.print("Enter second integer (b): ");
    int b = scanner.nextInt();

    bitwise(a, b);
  }

  public static void bitwise(int a, int b) {
    System.out.println("a and b: " + (a & b));
    System.out.println("a or b:  " + (a | b));
    System.out.println("a xor b: " + (a ^ b));
    System.out.println("not a:   " + (~a));

    // Note: the C/C++ shift operators are not guaranteed to work if the shift count (that is, b)
    // is negative, or is greater or equal to the number of bits in the integer being shifted.
    System.out.println(
        "a shl b: " + (a << b)); // Note: "<<" is used both for output and for left shift
    System.out.println(
        "a shr b: " + (a >> b)); // typically arithmetic right shift, but not guaranteed

    // logical right shift (guaranteed)
    int ua = a & 0xFFFFFFFF; // Ensure the number is treated as unsigned for right shift
    System.out.println("a lsr b: " + (ua >> b));

    // left rotate and right rotate using java standard library methods
    System.out.println("a rol b: " + Integer.rotateLeft(ua, b));
    System.out.println("a ror b: " + Integer.rotateRight(ua, b));
  }
}
