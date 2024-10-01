public
class BooleanLogic {
public
  static void main(String[] args) {
    Scanner sc = new Scanner(System.in); // for input from user

    System.out.println("Enter two boolean values (true/false): ");
    String firstInput = sc.nextLine();
    String secondInput = sc.nextLine();
    logic(Boolean.parseBoolean(firstInput),
          Boolean.parseBoolean(secondInput)); // convert strings to booleans and
                                              // pass into function logic()
  }

public
  static void logic(boolean a, boolean b) {
    System.out.println("a AND b: " + (a && b));
    System.out.println("a OR b: " + (a || b));
    System.out.println("NOT a: " + (!a));
  }
}