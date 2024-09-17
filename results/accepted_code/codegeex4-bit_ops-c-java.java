public class BitwiseExample {
  public static void bitwise(int a, int b) {

    System.out.println("a and b: " + (a & b));
    System.out.println("a or b: " + (a | b));
    System.out.println("a xor b: " + (a ^ b));

    System.out.println("~a: " + (~a));

    System.out.println("a << n: " + (a << b)); // left shift
    System.out.println("a >> n: " + (a >> b)); // on most platforms: arithmetic right shift

    // convert the signed integer into unsigned, so it will perform logical shift
    int c = a;
    System.out.println("(unsigned)c >> b: " + ((c & 0xFFFFFFFFL) >>> b)); // logical right shift

    // left rotation
    c <<= b;
    c >>>= Integer.SIZE - b;
    System.out.println("a << rotate n: " + c);

    // right rotation
    c = a;
    c >>>= b;
    c <<= Integer.SIZE - b;
    System.out.println("a >> rotate n: " + c);
  }

  public static void main(String[] args) {
    bitwise(10, 2);
  }
}
