```java
import java.util.ArrayList;
import java.util.List;

public class Factor {

    public static List<Integer> factor(int n) {
        List<Integer> factors = new ArrayList<>();
        int sqrtN = (int) Math.sqrt(n);

        for (int i = 1; i <= sqrtN; i++) {
            if (n % i == 0) {
                factors.add(i);
                factors.add(n / i);
            }
        }

        return factors;
    }

    public static void main(String[] args) {
        int[] numbers = {45, 53, 64};

        for (int number : numbers) {
            List<Integer> factors = factor(number);
            System.out.println(number + ": factors: " + factors);
        }
    }
}
```
