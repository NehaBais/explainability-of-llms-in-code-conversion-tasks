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
    int x = 45; // Assuming you increment x at the end of loop, start from num for calculating sqrt
    if (Math.pow(x, 2) == num) {
      factors1.add(x);
    }
    Collections.reverse(factors2);
    factors1.addAll(factors2);
    System.out.println("45: factors: " + factors1);

    factors1 = new ArrayList<Integer>();
    factors2 = new ArrayList<Integer>();
    for (int x = 1; x <= Math.sqrt(num2); x++) {
      if (num2 % x == 0) {
        factors1.add(x);
        factors2.add(num2 / x);
      }
    }
    x = 53;
    if (Math.pow(x, 2) == num2) {
      factors1.add(x);
    }
    Collections.reverse(factors2);
    factors1.addAll(factors2);
    System.out.println("53: factors: " + factors1);

    factors1 = new ArrayList<Integer>();
    factors2 = new ArrayList<Integer>();
    for (int x = 1; x <= Math.sqrt(num3); x++) {
      if (num3 % x == 0) {
        factors1.add(x);
        factors2.add(num3 / x);
      }
    }
    x = 64;
    if (Math.pow(x, 2) == num3) {
      factors1.add(x);
    }
    Collections.reverse(factors2);
    factors1.addAll(factors2);
    System.out.println("64: factors: " + factors1);
  }
}
