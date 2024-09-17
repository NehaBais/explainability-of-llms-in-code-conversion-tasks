Here is the Java code that computes the factors of a positive integer:
```
import java.util.*;
public class FactorsOfANumber {
 public static void main(String[] args) {
 printFactors(-1);
 printFactors(0);
 printFactors(1);
 printFactors(2);
 printFactors(3);
 printFactors(53);
 printFactors(45);
 printFactors(64);
 printFactors(600851475143L);
 printFactors(999999999999999989L);
 }
 
 public static void printFactors(long nr) {
 if (nr < 1) {
 System.out.println("Factors of " + nr + " not computed");
 return;
 }
 List factors = new ArrayList<>();
 factors.add((long)1);
 while ((nr & 1) == 0) {
 nr >>= 1;
 factors.add((long)2);
 }
 for (long d = 3; d * d <= nr; d += 2) {
 int e = 0;
 while (nr % d == 0) {
 e++;
 nr /= d;
 }
 if (e > 0) {
 List newFactors = new ArrayList<>();
 for (long factor : factors) {
 for (int i = 0; i <= e; i++) {
 newFactors.add(factor * (long)Math.pow(d, i));
 }
 }
 factors = newFactors;
 }
 }
 if (nr > 2) {
 List newFactors = new ArrayList<>();
 for (long factor : factors) {
 newFactors.add(factor * nr);
 }
 factors = newFactors;
 }
 System.out.println("Factors of " + nr + ": " + factors);
 System.out.println("Number of factors: " + factors.size());
 }
}
```
This code uses a while loop to check if the number is even and then divides it by 2 until it's no longer even. It then checks for odd divisors starting from 3, incrementing by 2 each time, until the square root of the number is reached. For each divisor found, it adds all its powers as factors to a list. Finally, it prints out the list of factors and their count.

