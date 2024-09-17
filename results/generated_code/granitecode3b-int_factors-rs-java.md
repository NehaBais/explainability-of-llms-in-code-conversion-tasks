Sure, here's the equivalent Java code:
```
import java.util.ArrayList;
import java.util.List;
public class FactorCalculator {
 public static void main(String[] args) {
 List expectedFactors = List.of(1, 2, 4, 5, 10, 10, 20, 25, 50, 100);
 List actualFactors = factor(100);
 System.out.println("Expected factors: " + expectedFactors);
 System.out.println("Actual factors: " + actualFactors);
 }
 
 public static List factor(int num) {
 List factors = new ArrayList<>(); // creates a new list for the factors of the number
 for (int i = 1; i <= Math.sqrt(num); i++) {
 if (num % i == 0) {
 factors.add(i); // pushes smallest factor to factors
 factors.add(num/i); // pushes largest factor to factors
 }
 }
 factors.sort((a, b) -> a - b); // sorts the factors into numerical order for viewing purposes
 return factors; // returns the factors
 }
}
``` 
Note that I've used `java.util.List` instead of `Vec`, and `ArrayList` as it is more appropriate for Java. Also, the `sqrt` method from the `Math` class is used to find the square root of the number being factored. The output will be printed to the console using `System.out.println`.

