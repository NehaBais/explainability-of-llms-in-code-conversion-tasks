Sure! Here's the Java code that does the same thing as the C++ code:
```java
import java.util.ArrayList;
import java.util.Collections;
public class Factorizer {
 public static ArrayList generateFactors(int n) {
 ArrayList factors = new ArrayList<>();
 for (int i = 1; i <= Math.sqrt(n); i++) {
 if (n % i == 0) {
 factors.add(i);
 if (i != n / i) {
 factors.add(n / i);
 }
 }
 }
 Collections.sort(factors);
 return factors;
 }
 
 public static void main(String[] args) {
 int[] sampleNumbers = { 3135, 45, 60, 81 };
 for (int num : sampleNumbers) {
 ArrayList factors = generateFactors(num);
 System.out.println("Factors of " + num + ":");
 for (int factor : factors) {
 System.out.print(factor + " ");
 }
 System.out.println();
 }
 }
}
``` 
This code uses an ArrayList to store the factors, loops through all numbers up to the square root of the input number, and checks if each number is a factor by dividing the input number by it. If the remainder is zero, then it's a factor, so it's added to the ArrayList. The resulting list is sorted using the Collections.sort() method, and printed out in the same way as the C++ code.

