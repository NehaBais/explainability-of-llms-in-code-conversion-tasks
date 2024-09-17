In Java, the equivalent code would be as follows. It should be clear that the logic is quite similar to the Python version - we go through each number up to square root of n and check if it's a divisor or not. If so, we add both the numbers into our lists (arrays in java).

```java
import java.util.*;

public class Main {
    public static void main(String[] args) {
        for (int i : new int[]{45, 53, 64}) {
            System.out<｜begin▁of▁sentence｜>out.printf("%d: factors: %s%n", i, Arrays.toString(factor(i)));
        }
    }
    
    public static List<Integer> factor(int n) {
        ArrayList<Integer> factors1 = new ArrayList<>(), factors2 = new ArrayList<>();
         for (int x = 1; x <= Math.sqrt(n); ++x){
            if (n % x == 0) {
                factors1.add(x);
                factors2.add(n / x);
            }
        }
        int y = (int)Math.sqrt(n);
        if (y * y == n) {
            factors1.add(y);
        }
        Collections.reverse(factors2);
        factors1.addAll(factors2);
        return factors1;
    }
}
```
This Java program prints the factorization of 45, 53 and 64 as in Python code you provided: each number followed by its factors separated by commas. It's worth noting that it uses an ArrayList to store the factors instead of a list for two reasons - it can grow dynamically (without needing to specify its size upfront) which is useful when working with large numbers, and it provides more convenient methods like `addAll()`.

