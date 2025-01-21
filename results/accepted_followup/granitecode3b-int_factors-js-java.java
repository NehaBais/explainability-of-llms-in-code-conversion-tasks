import java.util.*;
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