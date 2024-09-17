public class Main {
  public static void main(String[] args) {
    int a = 10; // replace with your first integer
    int b = 2; // replace with your second integer
    bitwiseOperation(a, b);
  }

  public static void bitwiseOperation(int a, int b) {
    System.out.println("a AND b: " + (a & b));
    System.out.println("a OR b: " + (a | b));
    System.out.println("a XOR b: " + (a ^ b));
    System.out.println("NOT a: " + ~a);
    System.out.println("a << b: " + (a << b)); // left shift
    System.out.println("a >> b: " + (a >> b)); // arithmetic right shift
    System.out.println("a >>> b: " + (a >>> b)); // logical right shift
  }
}
