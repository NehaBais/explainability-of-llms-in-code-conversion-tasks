public class Main {
  public static void main(String[] args) {
    int A = 10;
    int B = 2;
    bitwise(A, B);
  }

  static void bitwise(int A, int B) {
    System.out.println("A AND b: " + (A & B));
    System.out.println("A OR b: " + (A | B));
    System.out.println("A XOR b: " + (A ^ B));
    System.out.println("NOT a: " + ~A);
    System.out.println("A << b: " + (A << B)); // left shift
    System.out.println("A >> b: " + (A >> B)); // arithmetic right shift
    System.out.println("A >>> b: " + (A >>> B)); // logical right shift
  }
}
