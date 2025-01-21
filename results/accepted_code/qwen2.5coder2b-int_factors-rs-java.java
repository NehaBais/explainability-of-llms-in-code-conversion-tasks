import java.util.ArrayList;

public class Main {
  public static void main(String[] args) {
    System.out.println(factor(100)); // asserts that two expressions are equal to each other
    System.out.println(factor(101));
  }

  public static ArrayList<Integer> factor(int num) {
    ArrayList<Integer> factors = new ArrayList<>();

    for (int i = 1; i <= Math.sqrt(num); i++) {
      if (num % i == 0) {
        factors.add(i);
        if (i != num / i) {
          factors.add(num / i);
        }
      }
    }

    Collections.sort(factors);
    return factors;
  }
}
