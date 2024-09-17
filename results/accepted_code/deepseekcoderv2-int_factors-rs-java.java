import java.util.ArrayList;
import java.util.List;

public class Factorizer {
  public static List<Integer> factor(int num) {
    ArrayList<Integer> factors = new ArrayList<Integer>();

    for (int i = 1;
        i <= Math.sqrt(num);
        i++) { // uses the square root of the number to determine how far you need to go in finding
      // factors
      if (num % i == 0) {
        factors.add(i);
        factors.add(num / i);
      }
    }

    return factors;
  }

  public static void main(String[] args) {
    System.out.println(
        factor(100)); // prints the output of factor with argument 100 to console in an array
    System.out.println(factor(101));
  }
}
