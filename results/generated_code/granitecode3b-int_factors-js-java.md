Sure! Here's the equivalent Java code for the given JavaScript function that computes the factors of a positive integer.
```java
public static List getFactors(int num) {
 List factors = new ArrayList<>();
 for (int i = 1; i <= Math.sqrt(num); i++) {
 if (num % i == 0) {
 factors.add(i);
 if (i != num / i) {
 factors.add(num / i);
 }
 }
 }
 Collections.sort(factors);
 return factors;
}
```
This Java code defines a method `getFactors` that takes an integer `num` as input and returns a list of its factors. The code iterates over all possible divisors of the number up to its square root, checking if each divisor evenly divides it. If a divisor is found, it's added to the `factors` list along with its corresponding quotient (if applicable). Finally, the factors are sorted in ascending order and returned as a list.

