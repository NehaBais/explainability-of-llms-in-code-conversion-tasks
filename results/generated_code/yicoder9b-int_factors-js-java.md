Here is the equivalent Java code for the given JavaScript function. The logic used in this code remains the same as original one:

```java
import java.util.*;

public class Main {
    public static void main(String[] args) {
        System.out.println(Arrays.toString(factors(45)));  // [1, 3, 5, 9, 15, 45] 
        System.out.println(Arrays.toString(factors(53)));  // [1, 53] 
        System.out.println(Arrays.toString(factors(64)));  // [1, 2, 4, 8, 16, 32, 64]
    }
    
    public static Integer[] factors(int num) {
       ArrayList<Integer> n_factors = new ArrayList<Integer>();
       for (int i = 1; i <= Math.floor(Math.sqrt(num)); i += 1) {
           if (num % i == 0) {
               n_factors.add(i);
               if (num / i != i) {
                   n_factors.add(num/i);
               }
            }
        }
       Collections.sort(n_factors);  // Sorts the list in ascending order
       Integer[] factors = new Integer[n_factors.size()];
       factors = n_factors.toArray(factors); 
       return factors;
    }   
}
```
