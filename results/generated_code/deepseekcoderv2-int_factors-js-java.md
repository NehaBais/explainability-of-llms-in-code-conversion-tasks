 Here's the equivalent Java code for the provided JavaScript function:

```java
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

public class Factors {
    public static List<Integer> factors(int num) {
        List<Integer> n_factors = new ArrayList<>();
        
        for (int i = 1; i <= Math.floor(Math.sqrt(num)); i++) {
            if (num % i == 0) {
                n_factors.add(i);
                if (num / i != i) {
                    n_factors.add(num / i);
                }
            }
        }
        
        Collections.sort(n_factors);  // numeric sort
        return n_factors;
    }

    public static void main(String[] args) {
        System.out.println(factors(45));  // [1,3,5,9,15,45]
        System.out.println(factors(53));  // [1,53]
        System.out.println(factors(64));  // [1,2,4,8,16,32,64]
    }
}
```

### Explanation:
1. **Import Statements**: In Java, we import necessary classes (`ArrayList`, `Collections`, and `List`) from the Java standard library to handle lists and perform operations on them.
2. **factors Method**: The method takes an integer `num` as input and returns a list of its factors.
3. **Loop and Conditions**: The loop runs from 1 to the square root of `num`. For each value of `i`, it checks if `num % i == 0` (indicating that `i` is a factor). If so, it adds `i` to the list. It also adds `num / i` to the list unless `i` equals `num / i` (to avoid adding duplicates for perfect squares).
4. **Sorting**: The list of factors is sorted using `Collections.sort()`.
5. **Main Method**: This method tests the `factors` function with example inputs and prints the results.

This Java code mirrors the functionality of the provided JavaScript code, ensuring that it computes the factors of a positive integer correctly.
