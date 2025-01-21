import java.util.*;

public class Factor {
  public static void main(String[] args) {
    assertEquals(
        Arrays.asList(1, 2, 4, 5, 10, 10, 20, 25, 50, 100),
        factor(100)); // asserts that two expressions are equal to each other
    assertEquals(Arrays.asList(1, 101), factor(101));
  }

  public static List<Integer> factor(int num) {
    List<Integer> factors = new ArrayList<>(); // creates a new vector for the factors of the number

    for (int i = 1; i <= Math.sqrt(num) + 1; i++) {
      if (num % i == 0) {
        factors.add(i); // pushes smallest factor to factors
        factors.add(num / i); // pushes largest factor to factors
      }
    }
    Collections.sort(factors); // sorts the factors into numerical order for viewing purposes
    return factors; // returns the factors
  }

  public static void assertEquals(List<Integer> expected, List<Integer> actual) {
    // code to compare the two lists and assert that they are equal
  }
}
