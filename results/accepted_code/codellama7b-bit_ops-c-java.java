public static void bitwise(int a, int b) {
    System.out.printf("a and b: %d\n", a & b);
    System.out.printf("a or b: %d\n", a | b);
    System.out.printf("a xor b: %d\n", a ^ b);
    System.out.printf("not a: %d\n", ~a);
    System.out.printf("a << n: %d\n", a << b); /* left shift */
    System.out.printf("a >> n: %d\n", a >>> b); /* right arithmetic shift */
    /* convert the signed integer into unsigned, so it will perform logical shift */
    int c = a;
    System.out.printf("c >> b: %d\n", c >>> b); /* logical right shift */
    /* there are no rotation operators in Java */
    return 0;
}