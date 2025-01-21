public class Main {
  public static void main(String[] args) {
    int a = 10; // initial value of a
    int b = 3; // initial value of b

    // bitwise AND, OR, XOR operations
    System.out.println("a & b: " + (a & b));
    System.out.println("a | b: " + (a | b));
    System.out.println("a ^ b: " + (a ^ b));

    // bitwise NOT operation
    System.out.println("not a: " + (~a));

    // left shift operation
    System.out.println("a << n: " + (a << b));

    // arithmetic right shift operation
    System.out.println("a >> n: " + (a >> b));

    // logical right shift operation - Convert signed to unsigned first
    a = Math.abs(a);
    System.out.println("c >> b: " + (a >> b));
  }
}
