public class Main {
  public static void main(String[] args) {
    print_logic(true, true);
    print_logic(false, false);
    print_logic(true, false);
    print_logic(false, true);
  }

  static void print_logic(boolean a, boolean b) {
    int and_val = (a && b) ? 1 : 0;
    int or_val = (a || b) ? 1 : 0;
    int not_val = (!a) ? 1 : 0;

    System.out.println("a and b is " + and_val);
    System.out.println("a or b is " + or_val);
    System.out.println("not a is " + not_val);
  }
}
