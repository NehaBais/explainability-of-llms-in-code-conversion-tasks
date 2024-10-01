public class Main {
  public static void print_logic(boolean a, boolean b) {
    System.out.println("a and b is " + (a && b));
    System.out.println("a or b is " + (a || b));
    System.out.println("not a is " + (!a));
  }

  public static void main(String[] args) {
    print_logic(true, false);
  }
}
