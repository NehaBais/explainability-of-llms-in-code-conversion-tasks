import java.util.ArrayList;
import java.util.List;

public class Factor {

  public static void main(String[] args) {
    List expected = new ArrayList<>();
    expected.add(1);
    expected.add(2);
    expected.add(4);
    expected.add(5);
    expected.add(10);
    expected.add(10);
    expected.add(20);
    expected.add(25);
    expected.add(50);
    expected.add(100);
    List actual = factor(100);
    System.out.println("Expected: " + expected);
    System.out.println("Actual: " + actual);
  }

  public static List factor(int num) {
    List factors = new ArrayList<>(); // creates a new list for the factors of the number

    for (int i = 1; i <= Math.sqrt(num); i++) {
      if (num % i == 0) {
        factors.add(i); // adds smallest factor to factors
        int j = num / i;
        if (!factors.contains(
            j)) { // adds largest factor to factors only if it's not already in the list
          factors.add(j);
        }
      }
    }
    factors.sort(
        (a, b) ->
            Integer.compare(a, b)); // sorts the factors into numerical order for viewing purposes
    return factors; // returns the factors
  }
}
