public class Main {
  void bitwise(int A, int b) {
    System.out.println("A and b: " + (A & b));
    System.out.println("A or b: " + (A | b));
    System.out.println("A xor b: " + (A ^ b));
    System.out.println("not a: " + ~A);
    System.out.println("A << n: " + (A << b)); // left shift
    System.out.println("A >> n: " + (A >> b)); // arithmetic right shift
    // convert the signed integer into unsigned, so it will perform logical shift
    int c = A;
    System.out.println("c >> b: " + (c >>> b)); // logical right shift

    return;
  }

  public static void main(String[] args) {
    Main m = new Main();
    m.bitwise(10, 2);
  }
}
