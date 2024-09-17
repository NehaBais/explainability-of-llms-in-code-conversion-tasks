public class Main {
  public static void main(String[] args) {
    short a = -460, b = 6;
    
    System.out.printf("a:   %16s\n", Integer.toBinaryString(Short.toUnsignedInt(a)).replace(' ', '0'));
    System.out.printf("b:   %16s\n", Integer.toBinaryString(Short.toUnsignedInt(b)).replace(' ', '0'));
    
    // Bitwise logical operations
    if (b < 0) {
      System.err.println("Right operand is negative, but all shifts require an unsigned right operand  (shift distance).");
      return;
    }
    int ua = Short.toUnsignedInt(a);
    int ub = b;
    
    // Logical shifts  (unsigned left operand)
    System.out.printf("shl: %16s\n", Integer.toBinaryString(ua << ub).replace(' ', '0'));
    System.out<｜begin▁of▁sentence｜>printf("shr: %16s\n", Integer.toBinaryString(ua >> ub).replace(' ', '0'));
    
    // Arithmetic shifts  (signed left operand)
    System.out.printf("las: %16s\n", Integer<｜begin▁of▁sentence｜>Integer.toBinaryString(a << ub).replace(' ', '0'));
    System.out.printf("ras: %16s\n", Integer.toBinaryString((short)(ua >> ub)).replace(' ', '0'));
    
    // Rotations
    int temp = ua >> (16 - ub); 
    System.out.printf("rol: %16s\n", Integer.toBinaryString(ua << ub | temp).replace(' ', '0'));
    System.out.printf("ror: %16s\n", Integer.toBinaryString(temp | ua << (16 - ub)).replace(' ', '0'));
  }
}