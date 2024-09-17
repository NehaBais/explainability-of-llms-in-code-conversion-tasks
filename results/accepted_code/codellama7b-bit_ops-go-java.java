public class BitwiseOperations {
    public static void main(String[] args) {
        // Define two integers
        int a = -460;
        int b = 6;
        
        // Perform bitwise logical operations
        System.out.println("a:   " + Integer.toBinaryString(a));
        System.out.println("b:   " + Integer.toBinaryString(b));
        System.out.println("and: " + (a & b));
        System.out.println("or:  " + (a | b));
        System.out.println("xor: " + (a ^ b));
        System.out.println("not: " + ~a);
        
        // Perform bitwise shifts and rotates
        if (b < 0) {
            System.out.println("Right operand is negative, but all shifts require an unsigned right operand (shift distance).");
            return;
        }
        int ua = a;
        int ub = b;
        
        System.out.println("shl: " + (ua << ub));
        System.out.println("shr: " + (ua >> ub));
        System.out.println("las: " + ((ua << ub) & 0xffff));
        System.out.println("ras: " + ((ua >> ub) & 0xffff));
        
        // Perform rotations
        System.out.println("rol: " + (((ua << ub) | (int)((unsigned int)a >> (16 - ub))) & 0xffff));
        System.out.println("ror: " + (((int)(uint)a >> ub) | ((ua << (16 - ub)) & 0xffff)));
    }
}