public class Main {
  public static void main(String[] args) {
    bitwiseBuiltIns(8, 27, 125);
    helperFunctions(8, 27);
  }

  public static void bitwiseBuiltIns(int width, int a, int b) {
    int mask = (1 << width) - 1;
    System.out.println("AND:     0b" + Integer.toBinaryString(a).padStart(width, '0'));
    System.out.println("   &       0b" + Integer.toBinaryString(b).padStart(width, '0'));
    System.out.println(" = 0b" + Integer.toBinaryString((a & b) & mask).padStart(width, '0'));

    System.out.println("\nOR:      0b" + Integer.toBinaryString(a).padStart(width, '0'));
    System.out.println("   |       0b" + Integer.toBinaryString(b).padStart(width, '0'));
    System.out.println(" = 0b" + Integer.toBinaryString((a | b) & mask).padStart(width, '0'));

    System.out.println("\nXOR:     0b" + Integer.toBinaryString(a).padStart(width, '0'));
    System.out.println("   ^       0b" + Integer.toBinaryString(b).padStart(width, '0'));
    System.out.println(" = 0b" + Integer.toBinaryString((a ^ b) & mask).padStart(width, '0'));

    System.out.println("\nNOT:   ~ 0b" + Integer.toBinaryString(a).padStart(width, '0'));
    System.out.println("   = 0b" + Integer.toBinaryString(~a & mask).padStart(width, '0'));

    // Adding the rotl method for bit rotation
    System.out.println("\nRotated left by 1: " + rotr(width, a, 1));
  }

  public static int rotr(int width, int value, int amount) {
    if (amount >= width) {
      return 0;
    }
    int mask = (1 << width) - 1;
    value = value & mask;
    value <<= amount;
    value &= mask;
    return value;
  }

  public static void helperFunctions(int width, int a) {
    // Example of a helper function
    System.out.println("Helper: " + Integer.toBinaryString(a));
  }
}
