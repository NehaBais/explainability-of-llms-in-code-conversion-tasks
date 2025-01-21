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

    System.out.println("\nSHIFTS");
    System.out.print(
        "    RIGHT:   rotr({width}, 0b"
            + Integer.toBinaryString(a).padStart(width, '0')
            + ", 1) = ");
    System.out.println(Integer.toBinaryString(rotr(width, a, 1)).padStart(width, '0'));
    System.out.print(
        "    LEFT:    rotl({width}, 0b"
            + Integer.toBinaryString(a).padStart(width, '0')
            + ", 1) = ");
    System.out.println(Integer.toBinaryString(rotl(width, a, 1)).padStart(width, '0'));

    // Rest of the functions remain similar but need proper implementation
  }

  public static int rotr(int width, int a, int n) {
    return (a >>> n) | ((a & ((int) Math.pow(2, width - n) - 1)) << (width - n));
  }

  // Rest of the functions remain similar but need proper implementation
}
