The equivalent Java code for the given Python code is as follows.
Note that in Java, we use a similar approach to divide and conquer the integer, but instead of using a loop, we directly check division results with `%` operator.
Also, Java has its own function for squaring a number `isqrt(n)` which gives us the square root as an integer. 
```java
import java.util.*;
class Main {
    static List<Integer> factor(int n) {
        List<Integer> factors1 = new ArrayList<>(), factors2 = new ArrayList<>();
        for (int x = 1; x <= Math.sqrt(n); x++) {
            if (n % x == 0) {
                factors1.add(x);
                factors2.add(n / x);
            }
        }
        Collections.reverse(factors2); // Reverse to get proper descending order
        factors1.addAll(factors2);
        return factors1;
    }
    public static void main (String[] args) {
      for (int i : new int[]{45, 53, 64}) {
          System.out.println("Number: " + i + " Factors: " + factor(i));
      }
    }
  }
```
