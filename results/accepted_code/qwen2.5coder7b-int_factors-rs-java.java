import java.util.ArrayList;
import java.util.Collections;

public class Factor {

  public static void main(String[] args) {
    ArrayList<Integer> result1 = factor(100);
    ArrayList<Integer> expected1 = new ArrayList<>();
    Collections.addAll(expected1, 1, 2, 4, 5, 10, 20, 25, 50, 100);
    System.out.println(result1.equals(expected1));

    ArrayList<Integer> result2 = factor(101);
    ArrayList<Integer> expected2 = new ArrayList<>();
    Collections.addAll(expected2, 1, 101);
    System.out.println(result2.equals(expected2));
  }

  public static ArrayList<Integer> factor(int num) {
    ArrayList<Integer> factors =
        new ArrayList<>(); // creates a new array list for the factors of the number

    for (int i = 1; i <= Math.sqrt(num); i++) {
      if (num % i == 0) {
        factors.add(i); // adds smallest factor to factors
        if (i != num / i) {
          factors.add(
              num
                  / i); // adds largest factor to factors, only if it's not the same as the smallest
                        // one
        }
      }
    }
    Collections.sort(factors); // sorts the factors into numerical order for viewing purposes
    return factors; // returns the factors
  }
}
