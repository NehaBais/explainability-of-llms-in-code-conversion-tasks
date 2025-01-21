import java.util.ArrayList;
import java.util.Collections;

public class Main {
  public static void main(String[] args) {
    System.out.println(factors(45)); // [1,3,5,9,15,45]
    System.out.println(factors(53)); // [1,53]
    System.out.println(factors(64)); // [1,2,4,8,16,32,64]
  }

  public static ArrayList<Integer> factors(int num) {
    ArrayList<Integer> n_factors = new ArrayList<>();
    for (int i = 1; i <= Math.floor(Math.sqrt(num)); i++) {
      if (num % i == 0) {
        n_factors.add(i);
        if (num / i != i) n_factors.add(num / i);
      }
    }

    Collections.sort(n_factors);
    return n_factors;
  }
}
