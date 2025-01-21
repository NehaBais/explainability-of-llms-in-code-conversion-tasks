import java.util.*;

public class BitwiseOps {
  public static void bitwise(int a, int b) {
    System.out.println("a and b: " + (a & b));
    System.out.println("a or b:  " + (a | b));
    System.out.println("a xor b: " + (a ^ b));
    System.out.println("not a:   " + (~a));

    System.out.println("a shl b: " + (a << b));
    System.out.println("a shr b: " + (a >> b));
    System.out.println("a lsr b: " + (Math.floorMod(a, 1 << b)));

    int ua = a;
    for (int i = 0; i < b; ++i) {
      ua = (ua & 1) == 1 ? ua >> 1 | (1 << 31) : ua >> 1;
    }
    System.out.println("a rol b: " + ua);

    ua = a;
    for (int i = 0; i < b; ++i) {
      ua = (ua & 1) == 0 ? ua << 1 | 1 : ua << 1;
    }
    System.out.println("a ror b: " + ua);
  }

  public static void main(String[] args) {
    bitwise(5, 2);
  }
}
