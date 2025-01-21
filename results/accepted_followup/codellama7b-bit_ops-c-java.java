public static void bitwise(int a, int b) {
    System.out.printf("a and b: %d\n", (int) (a & b));
    System.out.printf("a or b: %d\n", (int) (a | b));
    System.out.printf("a xor b: %d\n", (int) (a ^ b));
    System.out.printf("not a: %d\n", ~(int) a);
    System.out.printf("a << n: %d\n", (int) (a << b)); /* left shift */
    System.out.printf("a >> n: %d\n", (int) (a >>> b)); /* right arithmetic shift */
    /* convert the signed integer into unsigned, so it will perform logical shift */
    int c = a;
    System.out.printf("c >> b: %d\n", (int) (c >>> b)); /* logical right shift */
    /* there are no rotation operators in Java */
    return 0;
}