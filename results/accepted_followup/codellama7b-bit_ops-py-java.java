import java.util.Scanner;

public class BitwiseOperations {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    System.out.println("Enter two integers: ");
    int a = sc.nextInt();
    int b = sc.nextInt();

    // Bitwise AND, OR, and XOR
    System.out.println("Bitwise AND: " + (a & b));
    System.out.println("Bitwise OR: " + (a | b));
    System.out.println("Bitwise XOR: " + (a ^ b));

    // Bitwise NOT
    System.out.println("Bitwise NOT: " + ~a);

    // Shifts and rotates
    int width = 8;
    int n = 1;
    System.out.println("Right shift: " + (a >> n));
    System.out.println("Left shift: " + (a << n));
    System.out.println("Right rotate: " + rotr(width, a, n));
    System.out.println("Left rotate: " + rotl(width, a, n));

    // Sign-extending arithmetic shifts
    int topBitMask = Integer.highestOneBit(width);
    int aa = a | topBitMask; // a with top bit set
    System.out.println("Sign-extending arithmetic shift right: " + asr(width, a, n));
    System.out.println(
        "Sign-extending arithmetic shift right (with top bit set): " + asr(width, aa, n));
  }

  private static int rotr(int width, int a, int n) {
    return (a >>> n) | (a << (width - n));
  }

  private static int rotl(int width, int a, int n) {
    return (a << n) | (a >>> (width - n));
  }

  private static int asr(int width, int a, int n) {
    int topBit = (a & topBitMask) >> (width - 1);
    return (a >>> n) | (topBit << (width - 1));
  }
}
