public class Bitwise {
    public static void bitwise_AND(int a, int b) {
        System.out.println("a & b: " + (a & b));
    }

    public static void bitwise_OR(int a, int b) {
        System.out.println("a | b: " + (a | b));
    }

    public static void bitwise_XOR(int a, int b) {
        System.out.println("a ^ b: " + (a ^ b));
    }

    public static void bitwise_NOT(int a) {
        System.out.println("~a: " + ~a);
    }

    public static void left_shift(int a, int b) {
        System.out.println("a << b: " + (a << b));
    }

    public static void right_shift(int a, int b) {
        System.out.println("a >> b: " + (a >> b));
    }

    public static void left_rotate(int a, int b) {
        System.out.println("std::rotl(a, b): " + std::rotl(a, b));
    }

    public static void right_rotate(int a, int b) {
        System.out.println("std::rotr(a, b): " + std::rotr(a, b));
    }
}