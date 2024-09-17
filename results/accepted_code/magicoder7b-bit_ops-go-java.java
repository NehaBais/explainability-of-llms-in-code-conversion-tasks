public class Main {
  public static void bitwiseOperations() {
    // Bitwise logical operations
    int a = -460;
    int b = 6;

    System.out.printf("a:   %16s\n", Integer.toBinaryString(a));
    System.out.printf("b:   %16s\n", Integer.toBinaryString(b));

    // Bitwise logical operations
    int and = a & b;
    int or = a | b;
    int xor = a ^ b;
    int not = ~a;

    System.out.printf("and: %16s\n", Integer.toBinaryString(and));
    System.out.printf("or:  %16s\n", Integer.toBinaryString(or));
    System.out.printf("xor: %16s\n", Integer.toBinaryString(xor));
    System.out.printf("not: %16s\n", Integer.toBinaryString(not));

    if (b < 0) {
      System.out.println(
          "Right operand is negative, but all shifts require an unsigned right operand.");
      return;
    }

    int ua = a;
    int ub = b;

    // Logical shifts (unsigned left operand)
    int shl = ua << ub;
    System.out.printf("shl: %16s\n", Integer.toBinaryString(shl));
    int shr = ua >> ub;
    System.out.printf("shr: %16s\n", Integer.toBinaryString(shr));

    // Arithmetic shifts (signed left operand)
    int las = a << ub;
    System.out.printf("las: %16s\n", Integer.toBinaryString(las));
    int ras = a >> ub;
    System.out.printf("ras: %16s\n", Integer.toBinaryString(ras));

    // Rotations
    int rol = (a << b) | ((a & -1 << b - 1) >>> (16 - b));
    System.out.printf("rol: %16s\n", Integer.toBinaryString(rol));
    int ror = (a >> b) | (a << (16 - b));
    System.out.printf("ror: %16s\n", Integer.toBinaryString(ror));
  }

  public static void main(String[] args) {
    bitwiseOperations();
  }
}
