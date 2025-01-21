import javax.swing.JOptionPane;

public class Compare {
  public static void main(String[] args) {
    // Get two integers from the user using JOptionPane
    int num1 = Integer.parseInt(JOptionPane.showInputDialog("Enter first integer:"));
    int num2 = Integer.parseInt(JOptionPane.showInputDialog("Enter second integer:"));

    compare(num1, num2);
  }

  public static void compare(int a, int b) {
    if (a == b) {
      System.out.println(a + " equals " + b);
    } else if (a < b) {
      System.out.println(a + " is less than " + b);
    } else if (a > b) {
      System.out.println(a + " is greater than " + b);
    }
  }
}
