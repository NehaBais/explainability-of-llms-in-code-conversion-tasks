import java.util.*;

public class Main {

  static List<Integer> factors(int num) {
    List<Integer> n_factors = new ArrayList<>();
    for (int i = 1; i <= Math.floor(Math.sqrt(num)); i += 1) {
      if (num % i == 0) {
        n_factors.add(i);
        if (num / i != i) n_factors.add(num / i);
      }
    }
    Collections.sort(n_factors); // numeric sort
    return n_factors;
  }

  public static void main(String[] args) {
    System.out.println(factors(45)); // [1,3,5,9,15,45]
    System.out.println(factors(53)); // [1,53]
    System.out.println(factors(64)); // [1,2,4,8,16,32,64]
  }
}
