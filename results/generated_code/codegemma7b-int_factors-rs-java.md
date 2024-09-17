```java
import java.util.Arrays;
import java.util.Vector;

public class FactorCalculator {

    public static void main(String[] args) {
        System.out.println(Arrays.toString(factor(100))); // asserts that two expressions are equal to each other
        System.out.println(Arrays.toString(factor(101)));
    }

    public static Integer[] factor(int num) {
        Vector<Integer> factors = new Vector<>();

        for (int i = 1; i <= Math.sqrt(num) + 1; i++) {
            if (num % i == 0) {
                factors.add(i);
                factors.add(num / i);
            }
        }

        Integer[] factorArray = new Integer[factors.size()];
        factors.toArray(factorArray);
        Arrays.sort(factorArray);
        return factorArray;
    }
}
```
