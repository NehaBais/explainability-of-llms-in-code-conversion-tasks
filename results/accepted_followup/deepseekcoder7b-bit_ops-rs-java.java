public class Main {
  public static void main(String[] args) {
    byte a = 105; // Bitwise operations are done on this variable
    byte b = 91; // Second integer to use as bit shift/rotate amount

    System.out.println(
        "a      = "
            + Integer.toBinaryString(
                a & 0xFF)); // Prints a in binary format, masking unnecessary bits using 0xFF
    System.out.println(
        "b      = " + Integer.toBinaryString(b & 0xFF)); // Masking unnecessary bits as above

    int shift =
        b; // Defining `shift` for left/right shifting and rotation, equivalent to second integer
           // 'b' in Rust code

    System.out.println(
        "a | b  = "
            + Integer.toBinaryString(
                (a | b) & 0xFF)); // Bitwise OR operation with a masking at the end
    System.out.println(
        "a & b  = "
            + Integer.toBinaryString(
                (a & b) & 0xFF)); // Bitwise AND operation with a masking at the end
    System.out.println(
        "a ^ b = "
            + Integer.toBinaryString(
                (a ^ b) & 0xFF)); // Bitwise XOR operation with a masking at the end

    System.out.println(
        "~a    = "
            + Integer.toBinaryString(
                (~a) & 0xFF)); // Bitwise NOT on 'a', also masking unnecessary bits

    System.out.println(
        "a << 3 = "
            + Integer.toBinaryString(
                (a << shift)
                    & 0xFF)); // Left shifting operation with a specified amount defined in 'shift'
                              // variable
    System.out.println(
        "a >> 3 = "
            + Integer.toBinaryString(
                (a >> shift)
                    & 0xFF)); // Right shifting operation with a specified amount defined in 'shift'
                              // variable, also masking unnecessary bits using 0xFF
  }
}
