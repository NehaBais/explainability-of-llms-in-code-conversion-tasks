public class Main {
    public static void main(String[] args) {
        byte a = 105;  // In java, u8 is replaced by byte
        byte b = 91;  
        
        System.out.println("a      = " + Integer.toBinaryString(a & 0xFF));
        System.out.println("b      = " + Integer.toBinaryString(b & 0xFF));
        System.out.println("a | b  = " + Integer.toBinaryString((a | b) & 0xFF));
        System.out.println("a & b  = " + Integer.toBinaryString((a & b) & 0xFF));
        System.out.println("a ^ b  = " + Integer.toBinaryString((a ^ b) & 0xFF));
        System.out.println("~a     = " + Integer.toBinaryString((~a) & 0xFF)); // bitwise not
        
        byte shift = 3;  // The amount of shift/rotate is done with a second byte variable in java, not integer
        System.out.println("a << 3  = " + Integer.toBinaryString((a << shift) & 0xFF));  
        System.out.println("a >> 3  = " + Integer.toBinaryString((a >> shift) & <｜begin▁of▁sentence｜>0xFF));  
    }
}