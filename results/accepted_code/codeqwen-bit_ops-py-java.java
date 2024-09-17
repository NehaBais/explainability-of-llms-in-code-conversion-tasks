public class Main {
    public static void main(String[] args) {
        bitwiseBuiltIns(8, 27, 125);
        helperFuncs(8, 27);
    }

    private static void bitwiseBuiltIns(int width, int A, int B) {
        int mask = (1 << width) - 1;
        System.out.println("    AND:     0b" + String.format("%0" + width + "d", Integer.toBinaryString(A)) +
                "\n        & 0b" + String.format("%0" + width + "d", Integer.toBinaryString(B)) +
                "\n        = 0b" + String.format("%0" + width + "d", (((A & B) & mask))) +
                "\n    ");

        System.out.println("    OR:      0b" + String.format("%0" + width + "d", Integer.toBinaryString(A)) +
                "\n        | 0b" + String.format("%0" + width + "d", Integer.toBinaryString(B)) +
                "\n        = 0b" + String.format("%0" + width + "d", (((A | B) & mask))) +
                "\n    ");

        System.out.println("    XOR:     0b" + String.format("%0" + width + "d", Integer.toBinaryString(A)) +
                "\n        ^ 0b" + String.format("%0" + width + "d", Integer.toBinaryString(B)) +
                "\n        = 0b" + String.format("%0" + width + "d", (((A ^ B) & mask))) +
                "\n    ");

        System.out.println("    NOT:     0b" + String.format("%0" + width + "d", Integer.toBinaryString(~A)));

        System.out.println("    SHIFTS:  " +
                "\n        << 1 = 0b" + String.format("%0" + width + "d", (((A << 1) & mask))) +
                "\n        >> 2 = 0b" + String.format("%0" + width + "d", (((A >> 2) & mask)));
    }

    private static void helperFuncs(int width, int A) {
        System.out.println("SIGN-EXTENDING ARITHMETIC SHIFT RIGHT\n");
        for (int i = 0; i <= 4; i++) {
            System.out.println("    asr(" + width + ", 0b" + String.format("%0" + width + "d", Integer.toBinaryString(A)) + ", " + i + ")\n        = 0b" +
                    String.format("%0" + width + "d", (((A >> i) & mask))) + "\n");
        }

    }

}