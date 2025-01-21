import java.util.*;
import org.junit.jupiter.api.Assertions;

public class Factor {
  public static void main(String[] args) {
    Assertions.assertEquals(
        Arrays.asList(1, 2, 4, 5, 10, 10, 20, 25, 50, 100),
        factor(100)); // checks if the result is equal to expected
    Assertions.assertEquals(Arrays.asList(1, 101), factor(101));
  }

  public static List<Integer> factor(int num) {
    List<Integer> factors = new ArrayList<>();

    for (int i = 1; i <= Math.sqrt(num); ++i) {
      if (num % i == 0) {
        factors.add(i);
        factors.add(num / i);
      }
    }
    Collections.sort(factors); // sorts the factors into numerical order for viewing purposes

    return factors;
  }
}
