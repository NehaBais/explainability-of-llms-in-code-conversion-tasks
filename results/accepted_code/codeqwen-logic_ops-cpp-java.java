public class Main {
  public static void printLogic(boolean A, boolean b) {
    System.out.println("A and b is " + (A && b));
    System.out.println("A or b is " + (A || b));
    System.out.println("not a is " + (!A));
  }

  public static void main(String[] args) {
    printLogic(true, false); // Replace true and false with your desired boolean values
  }
}
