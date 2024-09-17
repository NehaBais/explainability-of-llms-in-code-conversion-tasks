Here is the converted Java code for computing the factors of a positive integer. The logic remains the same as the Python code. However, we have used a different approach to compute the square root of the given number `n`. We are using the Math.sqrt() function instead of calculating it manually using the Babylonian method.
```java
import java.util.ArrayList;
public class Factor {
 public static ArrayList factor(int n) {
 ArrayList factors = new ArrayList<>();
 int sqrt = (int)Math.sqrt(n);
 for (int i = 1; i <= sqrt; i++) {
 if (n % i == 0) {
 factors.add(i);
 }
 }
 int lastFactor = sqrt * sqrt == n ? sqrt : 0;
 for (int i = factors.size() - 1; i >= 0; i--) {
 int factor = (int)factors.get(i);
 if (factor * lastFactor != n) {
 factors.add(lastFactor);
 }
 lastFactor = factor;
 }
 return factors;
 }
 public static void main(String[] args) {
 System.out.println("45: factors: " + factor(45));
 System.out.println("53: factors: " + factor(53));
 System.out.println("64: factors: " + factor(64));
 }
}
```

