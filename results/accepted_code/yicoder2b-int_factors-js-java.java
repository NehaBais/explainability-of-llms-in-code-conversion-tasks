import java.util.ArrayList;
import java.util.Collections;

public class Main {
  public static void main(String[] args) {
    System.out.println(factors(45)); // prints [1, 3, 5, 9, 15, 45]
    System.out.println(factors(53)); // prints [1, 53]
    System.out.println(factors(64)); // prints [1, 2, 4, 8, 16, 32, 64]
  }

  public static ArrayList<Integer> factors(int num) {
    ArrayList<Integer> n_factors = new ArrayList<Integer>();

    for (int i = 1; i <= Math.sqrt(num); i += 1) {
      if (num % i == 0) {
        n_factors.add(i);
        if (num / i != i) n_factors.add(num / i);
      }
    }

    Collections.sort(n_factors); // numeric sort
    return n_factors;
  }
}
