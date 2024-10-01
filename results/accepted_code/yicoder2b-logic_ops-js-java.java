public class Main {
  static void logic(int a, int b) {
    System.out.println("a AND b: " + (a & b)); // bitwise AND operator
    System.out.println("a OR b: " + (a | b)); // bitwise OR operator
    System.out.println("NOT a: " + ~a); // bitwise NOT operator
  }

  public static void main(String[] args) {
    logic(0, 1);
  }
}
