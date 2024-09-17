import java.util.stream.IntStream;

public class BitwiseOperations {

    public static void main(String[] args) {
        int a = 5, b = 3;
        bitwise(a, b);
    }

    public static void bitwise(int a, int b) {
        System.out.println("a and b: " + (a & b)));
        System.out.println("a or b:  " + (a | b)));
        System.out.println("a xor b: " + (a ^ b))));

        // Bitwise NOT operation
        int notA = ~a;
        System.out.println("not a:   " + notA));

        // Left shift operation
        int aShiftL = a << b;
        System.out.println("a shl b: " + aShiftL));

        // Right shift operation
        int aShiftR = a >> b;
        System.out.println("a shr b:  " + aShiftR));

        // Arithmetic right shift operation
        int arithmeticRightShift = (int) Math.round(a * Math.pow(2, -b))));
        System.out.println("a arshr b: " + arithmeticRightShift));

        // Left rotate operation
        int aRotateL = IntStream.rangeClosed(1, Integer.MAX_VALUE)).filter(x -> x <= (Integer.MAX_VALUE / a) * b).map(x -> x % a)).findFirst().getAsInt());
        System.out.println("a rol b:  " + aRotateL));

        // Right rotate operation
        int aRightRotate = IntStream.rangeClosed(1, Integer.MAX_VALUE))).filter(x -> x <= (Integer.MAX_VALUE / a) * b).map(x -> ((x % a) + a) % a)).findFirst().getAsInt());
        System.out.println("a ror b:  " + aRightRotate));
    }
}