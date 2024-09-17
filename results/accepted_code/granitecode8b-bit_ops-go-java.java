public class BitwiseOperations {
  public static void main(String[] args) {
    int a = -460;
    int b = 6;

    System.out.println("a: " + Integer.toBinaryString(a));
    System.out.println("b: " + Integer.toBinaryString(b));

    // Bitwise logical operations
    int and = a & b;
    int or = a | b;
    int xor = a ^ b;
    int not = ~a;

    System.out.println("and: " + Integer.toBinaryString(and));
    System.out.println("or: " + Integer.toBinaryString(or));
    System.out.println("xor: " + Integer.toBinaryString(xor));
    System.out.println("not: " + Integer.toBinaryString(not));

    // Logical shifts (unsigned left operand)
    int shl = a << b;
    int shr = a >> b;

    System.out.println("shl: " + Integer.toBinaryString(shl));
    System.out.println("shr: " + Integer.toBinaryString(shr));

    // Arithmetic shifts (signed left operand)
    int las = a << b;
    int ras = a >> b;

    System.out.println("las: " + Integer.toBinaryString(las));
    System.out.println("ras: " + Integer.toBinaryString(ras));

    // Rotations
    int rol = (a << b) | (a >>> (16 - b));
    int ror = (a >>> b) | (a << (16 - b));

    System.out.println("rol: " + Integer.toBinaryString(rol));
    System.out.println("ror: " + Integer.toBinaryString(ror));
  }
}
