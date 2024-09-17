public class BitwiseOperation {
  public static void main(String[] args) {
    int a = 10;
    int b = 5;

    System.out.println("a and b: " + (a & b));
    System.out.println("a or b:  " + (a | b));
    System.out.println("a xor b: " + (a ^ b));
    System.out.println("not a:   " + (~a));

    System.out.println("a shl b: " + (a << b));
    System.out.println("a shr b: " + (a >> b));
    System.out.println("a lsr b: " + (a >>> b));

    // Note: there is no bitwise rotate operator in Java, so we need to use a workaround using the
    // Math.floorMod() method.
    int c = 15;
    int d = 3;
    System.out.println("c rol d: " + ((c << d) | (c >>> (32 - d))));
    System.out.println("c ror d: " + ((c >>> d) | (c << (32 - d))));
  }
}
