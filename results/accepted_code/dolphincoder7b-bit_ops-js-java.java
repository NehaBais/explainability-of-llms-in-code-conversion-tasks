public class Main {
  public static void main(String[] args) {
    int a = -1;
    int b = 5;

    // bitwise AND
    System.out.println("a AND b: " + (a & b));

    // bitwise OR
    System.out.println("a OR b: " + (a | b));

    // bitwise XOR
    System.out.println("a XOR b: " + (a ^ b));

    // bitwise NOT
    System.out.println("NOT a: " + (~a));

    // left shift
    System.out.println("a  << b: " + (a << b));

    // right arithmetic shift
    System.out.println("a  >> b: " + (a >> b));

    // right logical shift
    System.out.println("a >>> b: " + (a >>> b));
  }
}
