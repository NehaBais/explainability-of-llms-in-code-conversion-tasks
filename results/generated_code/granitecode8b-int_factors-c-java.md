Here is the Java code that computes the factors of a positive integer:
```java
import java.util.ArrayList;
import java.util.List;
public class Factor {
 public static void main(String[] args) {
 int[] nums2factor = { 2059, 223092870, 3135, 45 };
 for (int i = 0; i < nums2factor.length; i++) {
 List factors = getFactors(nums2factor[i]);
 System.out.println("Factors of " + nums2factor[i] + ": " + factors);
 }
 }

 public static List getFactors(int num) {
 List factors = new ArrayList<>();
 for (int dvsr = 1; dvsr * dvsr < num; dvsr++) {
 if (num % dvsr != 0) {
 continue;
 }
 factors.add(dvsr);
 factors.add(num / dvsr);
 }
 if (dvsr * dvsr == num) {
 factors.add(dvsr);
 }
 return factors;
 }
}
```
The Java code uses an ArrayList to store the factors of the number being factored. It starts by initializing the ArrayList and setting the count to 0. Then, it loops through all possible divisors from 1 to the square root of the number being factored. If the divisor does not divide evenly into the number, it skips to the next iteration of the loop. Otherwise, it adds the divisor and the quotient to the ArrayList and increments the count by 2. Finally, if the number is a perfect square, it adds the square root as another factor. The method returns the ArrayList containing the factors of the number being factored.

