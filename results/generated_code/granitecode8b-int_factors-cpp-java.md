Here is the converted Java code for computing the factors of a positive integer:
```java
import java.util.*;
public class FactorGenerator {
 public static void main(String[] args) {
 int[] sampleNumbers = {3135, 45, 60, 81};
 for (int i = 0; i < sampleNumbers.length; i++) {
 List factors = generateFactors(sampleNumbers[i]);
 System.out.print("Factors of " + sampleNumbers[i] + " are: ");
 for (int j = 0; j < factors.size(); j++) {
 if (j > 0) {
 System.out.print(", ");
 }
 System.out.print(factors.get(j));
 }
 System.out.println("");
 }
 }
 public static List generateFactors(int n) {
 List factors = new ArrayList();
 factors.add(1);
 factors.add(n);

 for (int i = 2; i * i <= n; i++) {
 if (n % i == 0) {
 factors.add(i);
 int otherFactor = n / i;
 if (otherFactor != i) {
 factors.add(otherFactor);
 }
 }
 }

 Collections.sort(factors);
 return factors;
 }
}
```
This code uses a for loop to iterate through the sample numbers and calls the `generateFactors` function to compute the factors of each number. The `generateFactors` function returns a list of the factors, which is then printed to the console using another for loop.

