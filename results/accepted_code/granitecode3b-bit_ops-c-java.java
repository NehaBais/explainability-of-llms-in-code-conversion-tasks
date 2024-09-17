public class BitwiseOperations {

  public static void main(String[] args) {
    int a = 5;
    int b = 3;

    System.out.println("a and b: " + (a & b));
    System.out.println("a or b: " + (a | b));
    System.out.println("a xor b: " + (a ^ b));
    System.out.println("not a: " + (~a));
    System.out.println("a << n: " + (a << b)); /* left shift */
    System.out.println("a >> n: " + (a >> b)); /* on most platforms: arithmetic right shift */

    // convert the signed integer into unsigned, so it will perform logical shift
    int c = a;
    System.out.println("c >> b: " + (c >> b)); /* logical right shift */

    // there are no rotation operators in Java
  }
}
