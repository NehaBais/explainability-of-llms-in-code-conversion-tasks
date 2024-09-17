import java.util.*;

public class Main {
  public static void main(String[] args) {
    System.out.println(
        factor(100)
            .equals(
                Arrays.asList(
                    1, 2, 4, 5, 10, 10, 20, 25, 50, 100))); // checks if two lists are equal
    System.out.println(factor(101).equals(Arrays.asList(1, 101)));
  }

  public static List<Integer> factor(int num) {
    List<Integer> factors = new ArrayList<>(); // creates a new list for the factors of the number
    for (int i = 1; i <= Math.sqrt(num); i++) {
      if (num % i == 0) {
        factors.add(i); // pushes smallest factor to factors
        factors.add(num / i); // pushes largest factor to factors
      }
    }
    Collections.sort(factors); // sorts the factors into numerical order for viewing purposes
    return factors; // returns the factors
  }
}
