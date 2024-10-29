public class Main {
  public static void main(String[] args) {
    printLogic(
        true,
        false); // Calling the method with sample boolean values. Replace them as per requirements.
  }

  public static void printLogic(boolean a, boolean b) {
    System.out.println("a and b is " + (a && b));
    System.out.println("a or b is " + (a || b));
    System.out.println("not a is " + !a);
  }
}
