public class Main {
  public static void main(String[] args) {
    bitwise(10, 3);
  }

  static void bitwise(int a, int b) {
    System.out.println(
        "a & b: " + (a & b)); // Note: parentheses are needed because & has lower precedence than <<
    System.out.println("a | b:  " + (a | b));
    System.out.println("a ^ b: " + (a ^ b));
    System.out.println("not a:   " + ~a);

    // Note: the Java shift operators are always positive and work correctly regardless of the shift
    // count,
    // so we do not need to add parentheses around the left shift expression.
    System.out.println(
        "a shl b: " + (a << b)); // Note: "<<" is used both for output and for left shift
    System.out.println(
        "a shr b: " + (a >> b)); // typically arithmetic right shift, but not guaranteed in Java
    int ua = a;
    System.out.println("a lsr b: " + (ua >>> b)); // logical right shift (guaranteed)

    // there are no rotation operators in Java, but as of JDK 13, there is a standard-library rotate
    // function:
    // System.out.println("a rol b: " + rotReverse((byte)ua, b)); // Note: not available in all JVMs
    // System.out.println("a ror b: " + rotRight((byte)ua, b));  // Note: not available in all JVMs
  }
}
