public class LogicOperations {

  // Function that takes two boolean values and prints the result of "and", "or", and "not"
  // operations.
  public static void printLogic(boolean a, boolean b) {
    System.out.printf("a and b is %b\n", a && b);
    System.out.printf("a or b is %b\n", a || b);
    System.out.printf("not a is %b\n", !a);
  }

  // Main method to test the printLogic function.
  public static void main(String[] args) {
    // Test with both true and false values for a and b
    boolean testA = true;
    boolean testB = false;

    System.out.println("Testing with a = true, b = false:");
    printLogic(testA, testB);

    // Additional tests can be done here by changing the values of testA and testB.
  }
}
