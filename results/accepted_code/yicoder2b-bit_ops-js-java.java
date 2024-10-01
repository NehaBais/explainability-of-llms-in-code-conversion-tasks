public class Main {
  public static void main(String[] args) {
    int a = -15; // can be any integer
    int b = 3; // can be any integer
    System.out.println("a AND b: " + (a & b));
    System.out.println("a OR b: " + (a | b));
    System.out.println("a XOR b: " + (a ^ b));
    System.out.println(
        "NOT a: "
            + Math.abs(
                ~a)); // bitwise NOT is done by ~a, which gives -1 on an 8-bit unsigned integer so
    // we use abs to convert it into positive.
    System.out.println("a << b: " + (a << b)); // left shift
    System.out.println("a >> b: " + (a >> b)); // arithmetic right shift
    System.out.println("a >>> b: " + (a >>> b)); // logical right shift
  }
}
