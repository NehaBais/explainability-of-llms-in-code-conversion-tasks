Here is the Java code that computes the factors of a positive integer:
```java
import java.util.*;
public class Factors {
 public static List factors(int num) {
 List n_factors = new ArrayList<>();
 for (int i = 1; i <= Math.sqrt(num); i++) {
 if (num % i == 0) {
 n_factors.add(i);
 if (num / i != i) {
 n_factors.add(num / i);
 }
 }
 }
 Collections.sort(n_factors); // numeric sort
 return n_factors;
 }
 public static void main(String[] args) {
 System.out.println(factors(45)); // [1,3,5,9,15,45] 
 System.out.println(factors(53)); // [1,53] 
 System.out.println(factors(64)); // [1,2,4,8,16,32,64]
 }
}
```
In this code, we use a `List` to store the factors instead of an array. We also use the `Collections.sort()` method to sort the list numerically. Finally, we call the `factors()` method with some sample inputs and print the results.

