import java.util.*;

class Main {
  public static void main(String[] args) {
    Scanner scan = new Scanner(System.in);
    System.out.println("Enter two integers: ");
    int a = scan.nextInt();
    int b = scan.nextInt();

    System.out.printf("a and b: %d\n", a & b);
    System.out.printf("a or b: %d\n", a | b);
    System.out.printf("a xor b: %d\n", a ^ b);

    /* There is no bitwise NOT on signed integers in Java; we use >>> (logical shift) instead */
    System.out.printf("~a: %d\n", a >>> 32); // Logical right shift of an integer

    System.out.printf("a << b: %d\n", a << b); // left shift
    System.out.printf(
        "a >> b: %d\n",
        a >> b); // arithmetic right shift (logical, not always what you expect for negative
    // numbers)

    /* In Java, it is safe to use >>> on an integer; the >>> operator performs zero-fill right shift */
    System.out.printf("a >>> b: %d\n", a >>> b); // logical right shift (always positive)

    /* For left rotate and right rotate, we need to manually perform these operations */
    System.out.printf(
        "Left rotation of a by b positions : %d\n", ((a << b) | (a >> 32 - b))); // Left Rotate
    System.out.printf(
        "Right rotation of a by b positions: %d\n", ((a >> b) | (a << 32 - b))); // Right Rotate
  }
}
