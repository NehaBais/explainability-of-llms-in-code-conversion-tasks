public class BitwiseOperations {

  public static void main(String[] args) {
    int a = 5;
    int b = 3;

    System.out.println(
        "a and b: "
            + (a & b)); // Note: parentheses are needed because & has lower precedence than <<
    System.out.println("a or b:  " + (a | b));
    System.out.println("a xor b: " + (a ^ b));

    System.out.println(
        "not a:   "
            + ~a); // Note: the C/C++ shift operators are not guaranteed to work if the shift count
    // (that is, b)
    // is negative, or is greater or equal to the number of bits in the integer being shifted.
    System.out.println(
        "a shl b: " + (a << b)); // Note: "<<" is used both for output and for left shift
    System.out.println(
        "a shr b: " + (a >> b)); // typically arithmetic right shift, but not guaranteed
    int ua = a;
    System.out.println("a lsr b: " + (ua >> b)); // logical right shift (guaranteed)

    // there are no rotation operators in Java, but as of c++20 there is a standard-library rotate
    // function.
    // The rotate function works for all rotation amounts, but the integer being rotated must always
    // be an
    // unsigned integer.
    System.out.println("a rol b: " + Integer.rotateLeft(ua, b));
    System.out.println("a ror b: " + Integer.rotateRight(ua, b));
  }
}
