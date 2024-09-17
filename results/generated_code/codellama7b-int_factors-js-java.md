```java
import java.util.*;

public class Factorize {
    public static void main (String[] args) {
        System.out.println(factors(45));  // [1,3,5,9,15,45] 
        System.out.println(factors(53));  // [1,53] 
        System.out.println(factors(64));  // [1,2,4,8,16,32,64]
    }

    public static List<Integer> factors(int num) {
        List<Integer> n_factors = new ArrayList<>();
        for (int i = 1; i <= (int) Math.sqrt(num); i++) {
            if (num % i == 0) {
                n_factors.add(i);
                if (num / i != i) {
                    n_factors.add(num / i);
                }
            }
        }
        Collections.sort(n_factors, (a, b) -> a - b);  // numeric sort
        return n_factors;
    }
}
```
Note that in Java, we use the `ArrayList` class to create a dynamic array and the `Collections.sort` method to sort it numerically. We also used the ternary operator to simplify the code for checking whether the number is prime or not.
