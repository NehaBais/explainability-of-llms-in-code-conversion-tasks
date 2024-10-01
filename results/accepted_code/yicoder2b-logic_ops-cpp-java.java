public class Main {
  static void print_logic(boolean a, boolean b) {
    System.out.println("a and b is " + (a && b)); // Uses logical AND operator
    System.out.println("a or b is " + (a || b)); // Uses logical OR operator
    System.out.println("not a is " + !a); // Uses logical NOT operator
  }

  public static void main(String[] args) {
    print_logic(true, false); // Testing the function with given values
  }
}
