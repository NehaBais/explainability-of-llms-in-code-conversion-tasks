import java.util.ArrayList;
import java.util.Collections;

public class Main {
  public static void main(String[] args) {
    int num = 45, num2 = 53, num3 = 64;
    ArrayList<Integer> factors1 = new ArrayList<Integer>();
    ArrayList<Integer> factors2 = new ArrayList<Integer>();
    for (int x = 1; x <= Math.sqrt(num); x++) {
      if (num % x == 0) {
        factors1.add(x);
        factors2.add(num / x);
      }
    }
    int y = 45; // Assuming you increment y at the end of loop, start from num for calculating sqrt
    if (Math.pow(y, 2) == num) {
      factors1.add(y);
    }
    Collections.reverse(factors2);
    factors1.addAll(factors2);
    System.out.println("45: factors: " + factors1);

    factors1 = new ArrayList<Integer>();
    factors2 = new ArrayList<Integer>();
    for (int y = 1; y <= Math.sqrt(num2); y++) { // Changed 'x' to 'y'
      if (num2 % y == 0) {
        factors1.add(y);
        factors2.add(num2 / y);
      }
    }
    y = 53;
    if (Math.pow(y, 2) == num2) { // Changed 'x' to 'y'
      factors1.add(y);
    }
    Collections.reverse(factors2);
    factors1.addAll(factors2);
    System.out.println("53: factors: " + factors1);

    factors1 = new ArrayList<Integer>();
    factors2 = new ArrayList<Integer>();
    for (int y = 1; y <= Math.sqrt(num3); y++) { // Changed 'x' to 'y'
      if (num3 % y == 0) {
        factors1.add(y);
        factors2.add(num3 / y);
      }
    }
    y = 64;
    if (Math.pow(y, 2) == num3) { // Changed 'x' to 'y'
      factors1.add(y);
    }
    Collections.reverse(factors2);
    factors1.addAll(factors2);
    System.out.println("64: factors: " + factors1);
  }
}
