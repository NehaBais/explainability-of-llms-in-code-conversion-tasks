```java
import java.lang.Integer;

public class BitwiseOperations {

    public static void main(String[] args) {
        printBitwiseResults(8, 27, 125);
        printHelperFunctionsResults(8, 27);
    }

    // Prints the results of the bitwise AND, OR, XOR, NOT operations
    private static void printBitwiseResults(int width, int a, int b) {
        int mask = (1 << width) - 1;

        System.out.printf("    AND:     %6s\n", Integer.toBinaryString(a));
        System.out.printf("            & %6s\n", Integer.toBinaryString(b));
        System.out.printf("           = %6s\n", Integer.toBinaryString((a & b) & mask));

        System.out.println();
        
        System.out.printf("    OR:      %6s\n", Integer.toBinaryString(a));
        System.out.printf("            | %6s\n", Integer.toBinaryString(b));
        System.out.printf("           = %6s\n", Integer.toBinaryString((a | b) & mask));

        System.out.println();
        
        System.out.printf("    XOR:     %6s\n", Integer.toBinaryString(a));
        System.out.printf("            ^ %6s\n", Integer.toBinaryString(b));
        System.out.printf("           = %6s\n", Integer.toBinaryString((a ^ b) & mask));

        System.out.println();
        
        System.out.printf("    NOT:     ~ %6s\n", Integer.toBinaryString(a));
        System.out.printf("           = %6s\n", Integer.toBinaryString(~a & mask));
    }

    // Prints the results of the rotations and sign-extending arithmetic right shift operations
    private static void printHelperFunctionsResults(int width, int a) {
        int aa = a | (1 << width - 1);

        System.out.println("    ROTATIONS AND SIGN EXTENDING ARITHMETIC SHIFT RIGHT:");
        
        for (int shift : new int[] {1, 2, 4}) {
            System.out.printf("        asr(%d, %6s, %d)\n", width, Integer.toBinaryString(a), shift);
            System.out.printf("           = %6s\n", Integer.toBinaryString(getSignExtendingArithmeticRightShift(a, shift)));

            System.out.println();

            System.out.printf("        asr(%d, %6s, %d)\n", width, Integer.toBinaryString(aa), shift);
            System.out.printf("           = %6s\n", Integer.toBinaryString(getSignExtendingArithmeticRightShift(aa, shift)));

            System.out.println();
        }

        for (int shift : new int[] {1, 2, 4}) {
            System.out.printf("        rotl(%d, %6s, %d)\n", width, Integer.toBinaryString(a), shift);
            System.out.printf("           = %6s\n", Integer.toBinaryString(getLogicalLeftShift(a, shift)));

            System.out.println();

            System.out.printf("        rotl(%d, %6s, %d)\n", width, Integer.toBinaryString(aa), shift);
            System.out.printf("           = %6s\n", Integer.toBinaryString(getLogicalLeftShift(aa, shift)));
        }
    }

    // Bitwise AND operation
    public static int getBitwiseAnd(int a, int b) {
        return a & b;
    }

    // Bitwise OR operation
    public static int getBitwiseOr(int a, int b) {
        return a | b;
    }

    // Bitwise XOR operation
    public static int getBitwiseXor(int a, int b) {
        return a ^ b;
    }

    // Bitwise NOT operation
    public static int getBitwiseNot(int a) {
        return ~a;
    }

    // Logical left shift operation
    public static int getLogicalLeftShift(int a, int shift) {
        return a << shift;
    }

    // Sign-extending arithmetic right shift operation
    public static int getSignExtendingArithmeticRightShift(int a, int shift) {
        return (a >>> shift);
    }
}
```