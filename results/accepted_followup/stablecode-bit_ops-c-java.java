public class Main {

    public static void main(String[] args) {
        int a = 5;  // Any integer value can be used here.
        int b = 3;  // Shift amount, for both shift and rotate operations.

        bitwise(a, b);
    }

    static void bitwise(int a, int b) {

        System.out.println("a and b: " + (a & b))));
        System.out.println("a or b: " + (a | b))));
        System.out.println("a xor b: " + (a ^ b))));
        System.out.println("not a: " + ~a));
        System.out.println("a << n: " + (a << b))));  /* left shift */
        System.out.println("a >> n: " + ((int) a >> b))));  /* arithmetic right shift on Java, not just C++ */
        /* convert the signed integer into unsigned, so it will perform logical shift */
        int c = a;
        System.out.println("c >> b: " + (c >> b)))); /* logical right shift */

        return 0;
    }
}